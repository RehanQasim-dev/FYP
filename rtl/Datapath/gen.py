import numpy as np
import random
# Define the matrices
np.random
rows_a = 16
cols_a = 16
rows_b = 16
cols_b = 16
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
