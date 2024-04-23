import pandas as pd
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# Read the CSV file without header
data = pd.read_csv('./log_500.csv', header=None)

# Extract data for plotting
x = data.iloc[:, 0]  # First column
y = data.iloc[:, 1]  # Second column
z = data.iloc[:, 2]  # Third column
c = data.iloc[:, 3]  # Fourth column

# Create 3D plot
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Plot the 3D scatter plot
scatter = ax.scatter(x, y, z, c=c, cmap='viridis')
plt.colorbar(scatter, label='No of Cycles')

# Label axes and add title
ax.set_xlabel('M dim size')
ax.set_ylabel('K dim size')
ax.set_zlabel('N dim size')
ax.set_title('3D Plot')

# Show plot
plt.show()
