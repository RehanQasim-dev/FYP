#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define GEMM_base (int *)32
#define GEMM_A (*((volatile uint32_t *)(0x90000000UL)))
#define GEMM_B (*((volatile uint32_t *)(0x90000008UL)))
#define GEMM_C (*((volatile uint32_t *)(0x9000000BUL)))
#define GEMM_status (*((volatile uint32_t *)(0x90000010UL)))
#define GEMM_control (*((volatile uint32_t *)(0x90000014UL)))
#define GEMM_DIM (*((volatile uint32_t *)(0x90000018UL)))
#define GEMM_stride_A (*((volatile uint32_t *)(0x90000010UL)))
#define GEMM_stride_B (*((volatile uint32_t *)(0x90000014UL)))
#define GEMM_DIM (*((volatile uint32_t *)(0x90000018UL)))
#define blkm 32
#define blkk 16
#define blkn 16
#define Configure_GEMM(A, B, C, msize, ksize, nsize, overrite, store)
{
    GEMM_A = A;
    GEMM_B = B;
    GEMM_C = C;
    GEMM_control = overrite << 1 | store;
    GEMM_DIM = msize | ksize << 5 | nsize << 10;
}
#define M 6
#define N 6
#define K 6
uint32_t n = 0;
uint32_t k = 0;
uint32_t m = 0;
uint32_t nsize;
uint32_t ksize, msize;
uint32_t Tallwave, Widewave, mode;
uint32_t casee;
int A[M][K];
int B[K][N];
int C[M][N];

void main()
{
    while (n < N)
    {
        nsize = (n + blkn < N) ? blkn : N % blkn;
        m = 0;
        while (m < M)
        {
            msize = (m + blkm < M) ? blkm : M % blkm;
            k = 0;
            while (k < K)
            {
                bool last = (k + blkk > K);
                bool first = k == 0;
                ksize = last ? blkk : K % blkk;
                GEMM_A = A;
                GEMM_B = B;
                GEMM_C = C;
                GEMM_control = first << 1 | last;
                GEMM_DIM = msize | ksize << 5 | nsize << 10;
                k += blkk;
            }

            m += blkm;
        }

        n += blkn;
    }
}
