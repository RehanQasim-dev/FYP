import pandas as pd
import numpy as np
from sklearn.linear_model import LinearRegression
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D  # For 3D plotting

# Load the data from the specified CSV file
data = pd.read_csv('./log_500.csv', header=None, names=['M', 'K', 'N', 'Cycles'])

# Define independent variables and the dependent variable
X = data[['M', 'K', 'N']]
y = data['Cycles']

# Fit the linear regression model
model = LinearRegression()
model.fit(X, y)

# Get coefficients and intercept for the fitted plane
coefficients = model.coef_
intercept = model.intercept_

# Define a function for the fitted plane
def fitted_plane(m, k, n):
    return coefficients[0] * m + coefficients[1] * k + coefficients[2] * n + intercept

# Create a figure with two 3D plots
fig = plt.figure(figsize=(14, 6))  # Wider figure for two plots

# First plot: 3D scatter plot with original data
ax1 = fig.add_subplot(121, projection='3d')  # 1 row, 2 columns, first subplot
ax1.scatter(
    data['M'],  # X-axis
    data['K'],  # Y-axis
    data['N'],  # Z-axis
    c=data['Cycles'],  # Color representing cycles
    cmap='viridis',  # Colormap
    s=50,  # Marker size
    alpha=0.7  # Transparency
)
ax1.set_xlabel('M (Rows in Matrix A)')
ax1.set_ylabel('K (Columns in Matrix A / Rows in Matrix B)')
ax1.set_zlabel('N (Columns in Matrix B)')
ax1.set_title('3D Scatter Plot with Cycles as Color')

# Second plot: 3D plot with the fitted plane
ax2 = fig.add_subplot(122, projection='3d')  # 1 row, 2 columns, second subplot
# Create a mesh grid for the plane
m_range = np.linspace(data['M'].min(), data['M'].max(), 10)
k_range = np.linspace(data['K'].min(), data['K'].max(), 10)
n_range = np.linspace(data['N'].min(), data['N'].max(), 10)
m_grid, k_grid, n_grid = np.meshgrid(m_range, k_range, n_range)

# Calculate plane cycles using the fitted plane function
cycles_grid = fitted_plane(m_grid, k_grid, n_grid)

# Plot the fitted plane as a scatter plot with color representing predicted cycles
ax2.scatter(
    m_grid.ravel(), k_grid.ravel(), n_grid.ravel(), c=cycles_grid.ravel(), cmap='viridis', s=50, alpha=0.7
)
ax2.set_xlabel('M (Rows in Matrix A)')
ax2.set_ylabel('K (Columns in Matrix A / Rows in Matrix B)')
ax2.set_zlabel('N (Columns in Matrix B)')
ax2.set_title('Fitted 3D Plane with Predicted Cycles as Color')

# Adjust subplot layout and show the plots
plt.tight_layout()  # Ensure proper spacing
plt.show()
