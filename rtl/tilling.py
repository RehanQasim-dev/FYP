import numpy as np
import random
rows_a = 20
cols_a = 20
rows_b = 20 
cols_b = 20
random.seed(42)

# Generate matrix A
matrix_a = np.array([[random.randint(0, 6) for _ in range(cols_a)] for _ in range(rows_a)])

# Generate matrix B
matrix_b = np.array([[random.randint(0, 6) for _ in range(cols_b)] for _ in range(rows_b)])

matrix_c=np.zeros((rows_a,cols_b))
N=cols_b
M=rows_a
K=cols_a
blkn=16
blkm=16
blkk=16
for n in range(0, N, blkn):
    nsize = blkn if n + blkn <= N else N % blkn
    for m in range(0, M, blkm):
        msize = blkm if m + blkm <= M else M % blkm
        for k in range(0, K, blkk):
            ksize = blkk if k + blkk <= K else K % blkk
            matrix_c[m:m+msize, n:n+nsize] += np.dot(matrix_a[m:m+msize, k:k+ksize], matrix_b[k:k+ksize, n:n+nsize])
            print("matrixb=",matrix_b[k:k+ksize, n:n+nsize])
            print("matrixa=",matrix_a[m:m+msize, k:k+ksize])
            print(matrix_c[m:m+msize, n:n+nsize])
            print("-----------------------------------------------------------")
print(np.dot(matrix_a,matrix_b))
