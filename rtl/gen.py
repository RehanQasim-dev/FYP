import numpy as np
import random
# Define the matrices
# np.random
rows_a = 20
cols_a = 20
rows_b = 20 
cols_b = 20
random.seed(42)

# Generate matrix A
# matrix_a = np.array([[random.randint(0, 6) for _ in range(cols_a)] for _ in range(rows_a)])

# # Generate matrix B
# matrix_b = np.array([[random.randint(0, 6) for _ in range(cols_b)] for _ in range(rows_b)])
# print(matrix_a)
# print(matrix_b)
matrix_a=np.array([
          [5, 5, 8, 0, 2, 5, 1, 5, 7, 3, 2, 6, 4, 7, 8, 2, 3, 4, 7, 3],
          [6, 7, 0, 0, 8, 5, 0, 7, 8, 8, 4, 4, 6, 1, 7, 4, 0, 3, 1, 6],
          [8, 8, 8, 6, 0, 1, 6, 6, 8, 4, 0, 6, 0, 8, 8, 7, 2, 5, 7, 7],
          [5, 6, 4, 6, 1, 5, 3, 2, 0, 3, 3, 0, 7, 4, 8, 4, 0, 4, 5, 7],
          [7, 8, 4, 8, 2, 0, 4, 3, 1, 8, 7, 3, 3, 0, 6, 1, 8, 2, 6, 2],
          [1, 8, 7, 0, 0, 6, 5, 3, 4, 5, 0, 1, 3, 4, 3, 7, 6, 0, 7, 7],
          [7, 7, 2, 2, 4, 0, 2, 8, 4, 4, 4, 0, 6, 8, 4, 8, 7, 5, 5, 2],
          [0, 7, 6, 3, 3, 0, 1, 6, 4, 4, 6, 6, 0, 4, 5, 1, 1, 2, 1, 0],
          [5, 2, 3, 5, 7, 1, 1, 2, 5, 2, 1, 0, 1, 8, 5, 0, 4, 2, 5, 1],
          [8, 5, 6, 4, 1, 2, 3, 4, 4, 8, 6, 6, 7, 6, 7, 7, 1, 0, 8, 0],
          [1, 1, 1, 6, 3, 8, 8, 7, 3, 5, 7, 7, 5, 3, 0, 5, 0, 8, 3, 5],
          [1, 6, 7, 0, 6, 6, 8, 5, 0, 5, 5, 5, 6, 7, 1, 6, 6, 2, 7, 5],
          [6, 2, 2, 5, 2, 8, 3, 5, 4, 7, 6, 1, 8, 0, 3, 7, 8, 7, 2, 4],
          [0, 6, 5, 6, 5, 3, 5, 8, 6, 2, 5, 8, 0, 3, 3, 7, 7, 6, 5, 2],
          [1, 7, 2, 4, 3, 5, 5, 1, 4, 0, 8, 7, 3, 8, 2, 1, 8, 5, 0, 6],
          [6, 0, 6, 1, 4, 6, 0, 0, 0, 7, 1, 4, 6, 2, 6, 0, 5, 4, 7, 1],
          [5, 0, 6, 7, 0, 7, 2, 2, 2, 8, 0, 3, 1, 4, 6, 8, 7, 6, 6, 2],
          [5, 8, 4, 1, 0, 1, 0, 5, 8, 7, 5, 0, 3, 0, 4, 3, 7, 5, 7, 4],
          [5, 3, 7, 7, 0, 4, 5, 7, 7, 7, 3, 0, 7, 2, 0, 7, 1, 5, 5, 0],
          [3, 7, 0, 4, 8, 1, 6, 8, 8, 4, 2, 4, 2, 3, 2, 8, 2, 1, 3, 8]
      ])
matrix_a = matrix_a[:, ::-1]
matrix_b= np.array([
          [1, 5, 4, 4, 8, 6, 8, 1, 8, 2, 6, 0, 5, 6, 4, 5, 8, 2, 3, 6],
          [8, 5, 2, 1, 2, 0, 3, 2, 1, 6, 3, 6, 8, 8, 0, 8, 7, 4, 7, 7],
          [7, 6, 7, 2, 1, 3, 3, 0, 0, 4, 0, 3, 7, 8, 2, 1, 2, 3, 8, 1],
          [1, 3, 3, 7, 7, 3, 5, 5, 7, 3, 6, 6, 0, 3, 0, 4, 7, 7, 8, 0],
          [2, 0, 6, 0, 2, 8, 8, 7, 2, 1, 5, 7, 8, 2, 6, 4, 2, 3, 5, 4],
          [8, 0, 1, 0, 4, 5, 7, 4, 5, 5, 6, 5, 5, 2, 0, 4, 4, 4, 7, 5],
          [0, 2, 1, 1, 0, 2, 7, 3, 2, 3, 3, 1, 4, 0, 1, 8, 1, 3, 3, 5],
          [1, 7, 5, 0, 6, 3, 1, 6, 1, 8, 3, 5, 2, 4, 7, 8, 4, 0, 7, 8],
          [5, 0, 1, 6, 6, 5, 8, 8, 3, 1, 0, 5, 2, 0, 5, 7, 8, 7, 6, 4],
          [7, 8, 3, 8, 1, 5, 2, 0, 1, 0, 1, 3, 6, 4, 3, 2, 1, 7, 1, 0],
          [5, 6, 3, 7, 3, 3, 8, 7, 7, 2, 3, 5, 0, 0, 8, 2, 6, 4, 2, 2],
          [4, 5, 3, 1, 7, 3, 7, 3, 2, 2, 3, 6, 5, 2, 2, 5, 7, 7, 7, 2],
          [3, 8, 8, 8, 0, 1, 1, 0, 6, 2, 7, 5, 4, 1, 2, 6, 0, 1, 7, 1],
          [1, 2, 1, 0, 4, 2, 3, 5, 1, 6, 7, 3, 6, 6, 0, 2, 5, 5, 3, 8],
          [5, 5, 0, 1, 6, 3, 7, 8, 8, 6, 1, 2, 6, 1, 2, 1, 5, 0, 4, 0],
          [1, 2, 8, 0, 7, 7, 1, 5, 4, 5, 0, 7, 4, 0, 7, 1, 4, 2, 4, 5],
          [1, 6, 1, 4, 6, 2, 0, 1, 0, 3, 5, 1, 2, 1, 5, 0, 1, 8, 5, 5],
          [7, 3, 7, 1, 0, 4, 7, 1, 7, 4, 1, 0, 6, 8, 0, 1, 7, 7, 4, 0],
          [3, 7, 6, 3, 8, 1, 0, 0, 0, 0, 3, 8, 2, 5, 6, 1, 7, 3, 7, 1],
          [5, 6, 6, 5, 4, 4, 3, 4, 6, 7, 2, 0, 2, 0, 0, 6, 0, 6, 4, 6]
      ])    
matrix_b = matrix_b[:, ::-1]

# print(np.dot(matrix_a[0,:],matrix_b[:,0]))
print(np.dot(matrix_a,matrix_b))
# Function to write a matrix to a file in hexadecimal format
# def write_matrix_to_file(matrix, file_name):
#     with open(file_name, 'a') as file:
#         for row in matrix:
#             for element in row:
#                 # Write each element in hex format, followed by a newline
#                 file.write(f"{element:x]\n")

# # Write matrices to a text file
# write_matrix_to_file(matrix_a, "matrix_a.txt")
# write_matrix_to_file(matrix_b, "matrix_a.txt")


sys_rows = 16
sys_cols = 16
A=matrix_a
B=matrix_b
# Get dimensions of matrices A and B
A_rows, A_cols = A.shape
B_rows, B_cols = B.shape
C=None
for i in range(0, A_cols, sys_cols):  # Iterate over B columns
    for j in range(0, B_rows, sys_rows):  # Iterate over A and B rows
        tile_A = A[:, j:min(j + sys_rows, A_cols)]
        tile_B = B[j:min(j + sys_rows, B_rows), i:min(i + sys_cols, B_cols)]
        print("A_tile= ",tile_A)
        print("B_tile= ",tile_B)
        if(C is None):
            C=np.dot(tile_A,tile_B)
        else:
            C+=np.dot(tile_A,tile_B)
        print("tile C=",np.dot(tile_A,tile_B))
        # # Write columns of tile_A to separate files
        # for col in range(tile_A.shape[1]):
        #     with open(f"activations_{col+1].txt", 'w' if i==0 and j == 0 else 'a') as file_A:
        #         np.savetxt(file_A, tile_A[:, col], fmt='%d', newline="\n")
        
        # # Invert the columns of tile_B and write to separate files
        # for col in range(tile_B.shape[1]):
        #     inverted_col = np.flip(tile_B[:, col])  # Invert column using np.flip
        #     with open(f"w{col+1].txt", 'w' if i==0 and j == 0 else 'a') as file_B:
        #         np.savetxt(file_B, inverted_col, fmt='%d', newline="\n")
print("answer=",np.dot(A,B))