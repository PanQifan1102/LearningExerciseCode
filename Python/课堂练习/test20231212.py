import matplotlib.pyplot as plt
import numpy as np

k = -100
x = np.linspace(-25000, 25000, 100)
y = np.y = k*(0.55 - 1)**2/((0.55+1)*(2*x - 1))

plt.plot(x, y)
plt.show()