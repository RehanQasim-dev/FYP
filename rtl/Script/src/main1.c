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

#define M 3
#define N 3
#define K 3
int8_t A[M][K] = {
    {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// int8_t A[M][K] = {
//     {5, 0, 0, 5, 2, 1, 1, 1, 5, 0, 5, 5, 4, 0, 4, 3},
//     {0, 0, 0, 1, 1, 4, 4, 0, 4, 1, 5, 5, 5, 4, 3, 1},
//     {3, 4, 2, 6, 6, 0, 6, 6, 1, 5, 3, 2, 2, 1, 1, 6},
//     {2, 0, 0, 3, 0, 2, 6, 2, 4, 2, 6, 0, 5, 3, 4, 0},
//     {3, 0, 4, 2, 6, 5, 4, 6, 2, 4, 1, 5, 0, 0, 5, 1},
//     {6, 2, 0, 6, 1, 6, 0, 3, 2, 3, 5, 6, 2, 1, 2, 2},
//     {1, 5, 2, 5, 5, 5, 0, 4, 5, 1, 4, 5, 1, 1, 3, 3},
//     {2, 5, 5, 4, 1, 5, 2, 6, 6, 6, 0, 1, 6, 0, 6, 2},
//     {3, 2, 0, 1, 4, 5, 2, 1, 5, 3, 3, 5, 3, 1, 2, 1},
//     {1, 5, 4, 4, 2, 5, 4, 3, 4, 3, 2, 1, 1, 4, 3, 0},
//     {6, 0, 6, 0, 1, 5, 1, 6, 5, 3, 4, 0, 3, 3, 4, 3},
//     {4, 2, 4, 6, 0, 5, 5, 0, 5, 4, 6, 2, 6, 5, 2, 0},
//     {2, 3, 1, 3, 0, 5, 5, 2, 4, 6, 1, 4, 0, 6, 5, 2},
//     {6, 5, 4, 4, 1, 1, 2, 6, 1, 4, 6, 4, 0, 4, 2, 3},
//     {0, 0, 2, 6, 6, 2, 1, 0, 1, 4, 0, 0, 5, 3, 6, 0},
//     {6, 4, 6, 1, 1, 5, 3, 4, 1, 2, 4, 6, 4, 3, 1, 4}};
int8_t B[K][N] = {{1, 0, 4}, {4, 6, 7}, {7, 4, 3}};

// int8_t B[K][N] = {
//     {6, 5, 5, 1, 5, 2, 3, 5, 5, 2, 3, 4, 3, 0, 1, 1},
//     {0, 2, 0, 4, 4, 1, 4, 1, 0, 0, 5, 5, 0, 1, 0, 0},
//     {6, 2, 0, 4, 1, 2, 5, 3, 1, 4, 1, 5, 4, 4, 3, 1},
//     {6, 3, 6, 3, 1, 0, 0, 5, 3, 2, 3, 3, 3, 6, 5, 0},
//     {5, 5, 5, 0, 0, 3, 5, 2, 6, 6, 0, 1, 1, 1, 4, 3},
//     {1, 3, 1, 2, 3, 1, 6, 0, 3, 6, 6, 6, 4, 0, 0, 5},
//     {4, 6, 0, 0, 6, 6, 1, 1, 3, 3, 3, 1, 6, 3, 0, 1},
//     {3, 0, 3, 2, 6, 6, 3, 2, 3, 5, 5, 6, 4, 5, 5, 3},
//     {1, 1, 2, 1, 0, 4, 5, 4, 0, 5, 2, 0, 0, 4, 3, 4},
//     {6, 4, 1, 0, 4, 0, 6, 1, 0, 4, 0, 5, 6, 1, 3, 0},
//     {4, 1, 4, 4, 0, 4, 0, 3, 5, 4, 4, 4, 2, 2, 1, 5},
//     {5, 2, 1, 2, 3, 1, 5, 5, 2, 3, 2, 6, 0, 0, 3, 4},
//     {4, 0, 0, 4, 1, 4, 2, 1, 2, 0, 1, 2, 2, 1, 3, 6},
//     {4, 5, 2, 4, 6, 5, 4, 0, 5, 6, 4, 2, 5, 0, 1, 2},
//     {0, 0, 5, 4, 1, 2, 2, 4, 1, 5, 2, 1, 5, 5, 6, 2},
//     {4, 3, 2, 6, 0, 0, 5, 3, 6, 2, 0, 0, 2, 6, 1, 5}};
int32_t C[M][N];
// int32_t C[M][N] = {
//     {7, 7, 7, 5, 2, 1, 1, 1, 5, 0, 5, 5, 4, 0, 4, 3},
//     {0, 0, 0, 1, 1, 4, 4, 0, 4, 1, 5, 5, 5, 4, 3, 1},
//     {3, 4, 2, 6, 6, 0, 6, 6, 1, 5, 3, 2, 2, 1, 1, 6},
//     {2, 0, 0, 3, 0, 2, 6, 2, 4, 2, 6, 0, 5, 3, 4, 0},
//     {3, 0, 4, 2, 6, 5, 4, 6, 2, 4, 1, 5, 0, 0, 5, 1},
//     {6, 2, 0, 6, 1, 6, 0, 3, 2, 3, 5, 6, 2, 1, 2, 2},
//     {1, 5, 2, 5, 5, 5, 0, 4, 5, 1, 4, 5, 1, 1, 3, 3},
//     {2, 5, 5, 4, 1, 5, 2, 6, 6, 6, 0, 1, 6, 0, 6, 2},
//     {3, 2, 0, 1, 4, 5, 2, 1, 5, 3, 3, 5, 3, 1, 2, 1},
//     {1, 5, 4, 4, 2, 5, 4, 3, 4, 3, 2, 1, 1, 4, 3, 0},
//     {6, 0, 6, 0, 1, 5, 1, 6, 5, 3, 4, 0, 3, 3, 4, 3},
//     {4, 2, 4, 6, 0, 5, 5, 0, 5, 4, 6, 2, 6, 5, 2, 0},
//     {2, 3, 1, 3, 0, 5, 5, 2, 4, 6, 1, 4, 0, 6, 5, 2},
//     {6, 5, 4, 4, 1, 1, 2, 6, 1, 4, 6, 4, 0, 4, 2, 3},
//     {0, 0, 2, 6, 6, 2, 1, 0, 1, 4, 0, 0, 5, 3, 6, 0},
//     {6, 4, 6, 1, 1, 5, 3, 4, 1, 2, 4, 6, 4, 3, 1, 4}};

void main()
{
    uint32_t Tile_A_Address, Tile_B_Address, Tile_C_Address;
    uint32_t remaining_n = N;
    uint32_t remaining_m = M;
    uint32_t remaining_k = K;

    uint32_t current_n = 0;
    uint32_t current_m = 0;
    uint32_t current_k = 0;
    uint32_t cols_to_process, rows_to_process, rows_to_process_k;
    while (remaining_n > 0)
    {
        cols_to_process = (remaining_n >= SYS_COLS) ? SYS_COLS : remaining_n;

        while (remaining_m > 0)
        {
            rows_to_process = (remaining_m >= ACCUM_SIZE) ? ACCUM_SIZE : remaining_m;

            while (remaining_k > 0)
            {
                rows_to_process_k = (remaining_k >= SYS_ROWS) ? SYS_ROWS : remaining_k;

                bool is_last = (current_k + SYS_ROWS >= K);

                Tile_A_Address = &(A[current_m][current_k]);
                Tile_B_Address = &(B[current_k + rows_to_process_k - 1][current_n]);
                Tile_C_Address = &(C[current_m][current_n]);

                Configure_GEMM(Tile_A_Address, Tile_B_Address, Tile_C_Address, K, N, rows_to_process, rows_to_process_k, cols_to_process, (current_k == 0), is_last);

                while (GEMM_A == 1)
                {
                    // Wait for the slot to become available
                }
                remaining_k -= rows_to_process_k;

                current_k = K - remaining_k;
            }
            remaining_m -= rows_to_process;

            current_m = M - remaining_m;
            remaining_k = K;
        }
        remaining_n -= cols_to_process;

        current_n = N - remaining_n;
        remaining_m = M;
    }

    while (GEMM_DIM != 1)
    {
        // check if GEMM is done
    }
}
