#include <stdio.h>
#include <stdint.h>

#define M 2
#define K 3
#define N 2

void matrix_multiply(int32_t A[M][K], int32_t B[K][N], int32_t result[M][N])
{
    int i, j, k;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < K; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void print_matrix(int32_t matrix[M][N])
{
    int i, j;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // int32_t A[M][K] = {
    //     {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int32_t B[K][N] = {{1, 0, 4}, {4, 6, 7}, {7, 4, 3}};
    int32_t A[2][3] = {{1, 2, 3},
                       {4, 5, 6}};
    int32_t B[3][2] = {{7, 8},
                       {9, 10},
                       {11, 12}};
    int32_t result[M][N];

    matrix_multiply(A, B, result);
    printf("Resultant Matrix:\n");
    print_matrix(result);

    return 0;
}
