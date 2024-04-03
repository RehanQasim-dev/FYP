#include <stdio.h>
#include <stdint.h>

#define M 16
#define K 16
#define N 16

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
    int32_t A[M][K] = {
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
    int32_t B[K][N] = {
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
    int32_t result[M][N];

    matrix_multiply(A, B, result);
    printf("Resultant Matrix:\n");
    print_matrix(result);

    return 0;
}
