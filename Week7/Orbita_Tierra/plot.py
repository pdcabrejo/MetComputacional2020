import numpy as np
import matplotlib.pyplot as plt
import os

a = os.system("./Orbita 3 > marte.dat")

data = np.loadtxt("marte.dat")
x = data[:,0]
y = data[:,1]

plt.plot(x,y)
plt.show()

