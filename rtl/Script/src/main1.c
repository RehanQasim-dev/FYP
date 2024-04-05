#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "gemm.h"

// int32_t C[M][N];

void main()

{

    uint8_t A[2][3] = {{1, 2, 3},
                       {4, 5, 6}};
    uint8_t B[3][2] = {{7, 8},
                       {9, 7},
                       {11, 12}};
    uint32_t C[2][2];
    // Result matrix C

    // Call the matrix multiplication function
    MATMUL(2, 3, 2, A, B, C);
}
