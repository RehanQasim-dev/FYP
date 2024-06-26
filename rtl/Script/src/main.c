#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define GEMM_base (int *)32
#define GEMM_A (*((volatile uint32_t *)(0x90000000UL)))
#define GEMM_B (*((volatile uint32_t *)(0x90000004UL)))
#define GEMM_C (*((volatile uint32_t *)(0x90000008UL)))
#define GEMM_stride_A (*((volatile uint32_t *)(0x9000000CUL)))
#define GEMM_stride_B (*((volatile uint32_t *)(0x90000010UL)))
#define GEMM_control (*((volatile uint32_t *)(0x90000014UL)))
#define GEMM_DIM (*((volatile uint32_t *)(0x90000018UL)))
#define ACCUM_SIZE 16
#define SYS_ROWS 16
#define SYS_COLS 16
#define Configure_GEMM(A_addr, B_addr, C_addr, A_stride, B_stride, msize, ksize, nsize, overwrite, store) \
    {                                                                                                     \
        GEMM_stride_A = A_stride;                                                                         \
        GEMM_stride_B = B_stride;                                                                         \
        GEMM_A = A_addr;                                                                                  \
        GEMM_B = B_addr;                                                                                  \
        GEMM_C = C_addr;                                                                                  \
        GEMM_control = (overwrite << 1) | store;                                                          \
        GEMM_DIM = msize | (ksize << 5) | (nsize << 10);                                                  \
    }

#define M 16
#define N 16
#define K 16

int8_t A[M][K] = {
    {5, 0, 0, 5, 2, 1, 1, 1, 5, 0, 5, 5, 4, 0, 4, 3},
    {0, 0, 0, 1, 1, 4, 4, 0, 4, 1, 5, 5, 5, 4, 3, 1},
    {3, 4, 2, 6, 6, 0, 6, 6, 1, 5, 3, 2, 2, 1, 1, 6},
    {2, 0, 0, 3, 0, 2, 6, 2, 4, 2, 6, 0, 5, 3, 4, 0},
    {3, 0, 4, 2, 6, 5, 4, 6, 2, 4, 1, 5, 0, 0, 5, 1},
    {6, 2, 0, 6, 1, 6, 0, 3, 2, 3, 5, 6, 2, 1, 2, 2},
    {1, 5, 2, 5, 5, 5, 0, 4, 5, 1, 4, 5, 1, 1, 3, 3},
    {2, 5, 5, 4, 1, 5, 2, 6, 6, 6, 0, 1, 6, 0, 6, 2},
    {3, 2, 0, 1, 4, 5, 2, 1, 5, 3, 3, 5, 3, 1, 2, 1},
    {1, 5, 4, 4, 2, 5, 4, 3, 4, 3, 2, 1, 1, 4, 3, 0},
    {6, 0, 6, 0, 1, 5, 1, 6, 5, 3, 4, 0, 3, 3, 4, 3},
    {4, 2, 4, 6, 0, 5, 5, 0, 5, 4, 6, 2, 6, 5, 2, 0},
    {2, 3, 1, 3, 0, 5, 5, 2, 4, 6, 1, 4, 0, 6, 5, 2},
    {6, 5, 4, 4, 1, 1, 2, 6, 1, 4, 6, 4, 0, 4, 2, 3},
    {0, 0, 2, 6, 6, 2, 1, 0, 1, 4, 0, 0, 5, 3, 6, 0},
    {6, 4, 6, 1, 1, 5, 3, 4, 1, 2, 4, 6, 4, 3, 1, 4}};
int8_t B[K][N] = {
    {6, 5, 5, 1, 5, 2, 3, 5, 5, 2, 3, 4, 3, 0, 1, 1},
    {0, 2, 0, 4, 4, 1, 4, 1, 0, 0, 5, 5, 0, 1, 0, 0},
    {6, 2, 0, 4, 1, 2, 5, 3, 1, 4, 1, 5, 4, 4, 3, 1},
    {6, 3, 6, 3, 1, 0, 0, 5, 3, 2, 3, 3, 3, 6, 5, 0},
    {5, 5, 5, 0, 0, 3, 5, 2, 6, 6, 0, 1, 1, 1, 4, 3},
    {1, 3, 1, 2, 3, 1, 6, 0, 3, 6, 6, 6, 4, 0, 0, 5},
    {4, 6, 0, 0, 6, 6, 1, 1, 3, 3, 3, 1, 6, 3, 0, 1},
    {3, 0, 3, 2, 6, 6, 3, 2, 3, 5, 5, 6, 4, 5, 5, 3},
    {1, 1, 2, 1, 0, 4, 5, 4, 0, 5, 2, 0, 0, 4, 3, 4},
    {6, 4, 1, 0, 4, 0, 6, 1, 0, 4, 0, 5, 6, 1, 3, 0},
    {4, 1, 4, 4, 0, 4, 0, 3, 5, 4, 4, 4, 2, 2, 1, 5},
    {5, 2, 1, 2, 3, 1, 5, 5, 2, 3, 2, 6, 0, 0, 3, 4},
    {4, 0, 0, 4, 1, 4, 2, 1, 2, 0, 1, 2, 2, 1, 3, 6},
    {4, 5, 2, 4, 6, 5, 4, 0, 5, 6, 4, 2, 5, 0, 1, 2},
    {0, 0, 5, 4, 1, 2, 2, 4, 1, 5, 2, 1, 5, 5, 6, 2},
    {4, 3, 2, 6, 0, 0, 5, 3, 6, 2, 0, 0, 2, 6, 1, 5}};
int32_t C[M][N] = {
    {7, 7, 7, 5, 2, 1, 1, 1, 5, 0, 5, 5, 4, 0, 4, 3},
    {0, 0, 0, 1, 1, 4, 4, 0, 4, 1, 5, 5, 5, 4, 3, 1},
    {3, 4, 2, 6, 6, 0, 6, 6, 1, 5, 3, 2, 2, 1, 1, 6},
    {2, 0, 0, 3, 0, 2, 6, 2, 4, 2, 6, 0, 5, 3, 4, 0},
    {3, 0, 4, 2, 6, 5, 4, 6, 2, 4, 1, 5, 0, 0, 5, 1},
    {6, 2, 0, 6, 1, 6, 0, 3, 2, 3, 5, 6, 2, 1, 2, 2},
    {1, 5, 2, 5, 5, 5, 0, 4, 5, 1, 4, 5, 1, 1, 3, 3},
    {2, 5, 5, 4, 1, 5, 2, 6, 6, 6, 0, 1, 6, 0, 6, 2},
    {3, 2, 0, 1, 4, 5, 2, 1, 5, 3, 3, 5, 3, 1, 2, 1},
    {1, 5, 4, 4, 2, 5, 4, 3, 4, 3, 2, 1, 1, 4, 3, 0},
    {6, 0, 6, 0, 1, 5, 1, 6, 5, 3, 4, 0, 3, 3, 4, 3},
    {4, 2, 4, 6, 0, 5, 5, 0, 5, 4, 6, 2, 6, 5, 2, 0},
    {2, 3, 1, 3, 0, 5, 5, 2, 4, 6, 1, 4, 0, 6, 5, 2},
    {6, 5, 4, 4, 1, 1, 2, 6, 1, 4, 6, 4, 0, 4, 2, 3},
    {0, 0, 2, 6, 6, 2, 1, 0, 1, 4, 0, 0, 5, 3, 6, 0},
    {6, 4, 6, 1, 1, 5, 3, 4, 1, 2, 4, 6, 4, 3, 1, 4}};
uint32_t nsize;
uint32_t ksize, msize;
uint32_t casee;
uint32_t Tile_A_Address, Tile_B_Address, Tile_C_Address;
bool last, first;
uint32_t n = 0;
uint32_t k = 0;
uint32_t m = 0;
void main()
{

    for (n = 0; n < N; n += SYS_COLS)
    {
        nsize = (n + SYS_COLS <= N) ? SYS_COLS : N % SYS_COLS;

        for (m = 0; m < M; m += ACCUM_SIZE)
        {
            msize = (m + ACCUM_SIZE <= M) ? ACCUM_SIZE : M % ACCUM_SIZE;

            for (k = 0; k < K; k += SYS_ROWS)
            {
                last = (k + SYS_ROWS >= K);
                first = k == 0;
                ksize = (k + SYS_ROWS <= K) ? SYS_ROWS : K % SYS_ROWS;
                Tile_A_Address = &(A[m][k]);
                Tile_B_Address = &(B[(k + ksize - 1)][n]);
                Tile_C_Address = &(C[m][n]);
                Configure_GEMM(Tile_A_Address, Tile_B_Address, Tile_C_Address, K, N, msize, ksize, nsize, first, last);
                while (GEMM_A == 1)
                {
                    // Wait for the slot to become available
                }
            }
        }
    }
    while (GEMM_DIM != 1)
    {
        // check if GEMM is done
    }
}
