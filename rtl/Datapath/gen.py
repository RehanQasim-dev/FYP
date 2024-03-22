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
matrix_a = np.array([[random.randint(0, 6) for _ in range(cols_a)] for _ in range(rows_a)])

# Generate matrix B
matrix_b = np.array([[random.randint(0, 6) for _ in range(cols_b)] for _ in range(rows_b)])
print(matrix_a)
print(matrix_b)

print(np.dot(matrix_a,matrix_b))
# Function to write a matrix to a file in hexadecimal format
def write_matrix_to_file(matrix, file_name):
    with open(file_name, 'a') as file:
        for row in matrix:
            for element in row:
                # Write each element in hex format, followed by a newline
                file.write(f"{element:x}\n")

# Write matrices to a text file
write_matrix_to_file(matrix_a, "matrix_a.txt")
write_matrix_to_file(matrix_b, "matrix_a.txt")


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
        #     with open(f"activations_{col+1}.txt", 'w' if i==0 and j == 0 else 'a') as file_A:
        #         np.savetxt(file_A, tile_A[:, col], fmt='%d', newline="\n")
        
        # # Invert the columns of tile_B and write to separate files
        # for col in range(tile_B.shape[1]):
        #     inverted_col = np.flip(tile_B[:, col])  # Invert column using np.flip
        #     with open(f"w{col+1}.txt", 'w' if i==0 and j == 0 else 'a') as file_B:
        #         np.savetxt(file_B, inverted_col, fmt='%d', newline="\n")
print("answer=",np.dot(A,B))