import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression
from sklearn.pipeline import make_pipeline

# Read the CSV file without header
data = pd.read_csv('./log.csv', header=None)

# Extract data for plotting
x = data.iloc[:, 0].values  # First column (M dim size)
y = data.iloc[:, 1].values  # Second column (K dim size)
z = data.iloc[:, 2].values  # Third column (N dim size)
c = data.iloc[:, 3].values  # Fourth column (No of Cycles)

# Create a higher-degree polynomial regression model
degree = 3  # You can adjust the degree as needed
model = make_pipeline(PolynomialFeatures(degree), LinearRegression())

# Fit the model
model.fit(np.column_stack((x, y, z)), c)

# Generate points for the surface plot
x_surf = np.linspace(min(x), max(x), 100)
y_surf = np.linspace(min(y), max(y), 100)
z_surf = np.linspace(min(z), max(z), 100)
x_surf, y_surf, z_surf = np.meshgrid(x_surf, y_surf, z_surf)
c_surf = model.predict(np.column_stack((x_surf.ravel(), y_surf.ravel(), z_surf.ravel())))

# Create 3D plot
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Plot the surface
ax.scatter(x_surf, y_surf, z_surf, c=c_surf, cmap='viridis')

# Plot the original data points
ax.scatter(x, y, z, c=c, cmap='viridis')

# Add color bar
sm = plt.cm.ScalarMappable(cmap='viridis')
sm.set_array(c)
cbar = plt.colorbar(sm, ax=ax, label='No of Cycles')

# Label axes and add title
ax.set_xlabel('M dim size')
ax.set_ylabel('K dim size')
ax.set_zlabel('N dim size')
ax.set_title('3D Plot')

# Show plot
plt.show()
