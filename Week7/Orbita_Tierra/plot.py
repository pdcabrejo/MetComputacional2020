import numpy as np
import matplotlib.pyplot as plt
import os

a = os.system("./Orbita 2")

data = np.loadtxt("Energia.dat")
x = data[:,0]
y = data[:,1]

plt.plot(x,y)
#plt.ylim(0.,1.)
plt.show()

