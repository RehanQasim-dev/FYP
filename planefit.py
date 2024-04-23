import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# Define the range of values for each variable
m_range = np.linspace(20, 500, 100)  # Adjust as needed
k_range = np.linspace(20, 500, 100)  # Adjust as needed
n_range = np.linspace(20, 500, 100)  # Adjust as needed

# Create a mesh grid for the 3D plot
m_grid, k_grid, n_grid = np.meshgrid(m_range, k_range, n_range)

# Calculate the function M^3 + K^2 + N^2 for each point on the mesh grid
result_grid = m_grid**3 + k_grid**3 + n_grid**3

# Create the 3D plot
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Plot the surface with varying color based on the result
scatter = ax.scatter(m_grid.ravel(), k_grid.ravel(), n_grid.ravel(), c=result_grid.ravel(), cmap='viridis', alpha=0.7)

# Add a color bar to represent the range of the calculated values
colorbar = fig.colorbar(scatter, ax=ax, pad=0.1)

# Set axis labels and plot title
ax.set_xlabel('M')
ax.set_ylabel('K')
ax.set_zlabel('N')
ax.set_title('3D Plot of M^3 + K^3 + N^3')

# Display the plot
plt.show()
