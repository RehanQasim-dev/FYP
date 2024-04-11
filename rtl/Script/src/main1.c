#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "gemm.h"

// int32_t C[M][N];
//register int asm ("r10");

void display_on_led (uint32_t *C, uint32_t rows,uint32_t  colmn);

void delay  (int i);

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
    display_on_led(*C, 2,2);
}

void delay (int i){
    for (int e=0 ; e < i ; e++){}
}

void display_on_led (uint32_t *C, uint32_t rows, uint32_t colmn){
    uint32_t q =0;
    uint32_t w=0;
    uint32_t value=0;
    for (q ; q<rows ; q++){
        for (w ; w<colmn ; w++){
            value = C[q][w];
            asm ("mv a0, %0": : "r"(value));
            delay(10000);
        }
    }
    
}