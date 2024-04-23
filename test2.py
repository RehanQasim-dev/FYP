import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# Read the CSV file
data = pd.read_csv('./log_500.csv', header=None, names=['M', 'K', 'N', 'Cycles'])

# Display the first few rows of the dataframe
print(data.head())
print(data.describe())

# Create a figure with three subplots
# fig, axes = plt.subplots(1, 3, figsize=(15, 5))  # 1 row, 3 columns, with custom size

# # Scatter plot for 'M' vs 'Cycles'
# axes[0].scatter(data['M'], data['Cycles'], color='blue', alpha=0.7)
# axes[0].set_title('M vs Cycles')
# axes[0].set_xlabel('M (Rows in Matrix A)')
# axes[0].set_ylabel('Cycles')

# # Scatter plot for 'K' vs 'Cycles'
# axes[1].scatter(data['K'], data['Cycles'], color='green', alpha=0.7)
# axes[1].set_title('K vs Cycles')
# axes[1].set_xlabel('K (Columns in Matrix A / Rows in Matrix B)')

# # Scatter plot for 'N' vs 'Cycles'
# axes[2].scatter(data['N'], data['Cycles'], color='red', alpha=0.7)
# axes[2].set_title('N vs Cycles')
# axes[2].set_xlabel('N (Columns in Matrix B)')

# # Adjust layout for better visibility
# plt.tight_layout()  # Ensures proper spacing between subplots

# # Display the plots
# plt.show()
# Define the independent variables (M, K, N) and dependent variable (Cycles)
X = data[['M', 'K', 'N']]
y = data['Cycles']

# Fit a linear regression model
regression = LinearRegression()
regression.fit(X, y)

# Retrieve the coefficients and the intercept for the plane
coefficients = regression.coef_  # Coefficients for M, K, N
intercept = regression.intercept_  # Intercept of the plane
print("Coefficients for M, K, N:", coefficients)
print("Intercept:", intercept)

# Create the plane equation
plane_equation = f"Cycles = {coefficients[0]:.4f} * M + {coefficients[1]:.4f} * K + {coefficients[2]:.4f} * N + {intercept:.4f}"

print("Equation of the 3D Plane:")
print(plane_equation)