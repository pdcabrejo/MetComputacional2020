import numpy as np
import matplotlib.pyplot as plt
import os

a = os.system("./Orbita 2 | gnuplot")

data = np.loadtxt("data/Energy.dat")
data1 = np.loadtxt("data/Trayectory.dat")

x = data[:,0]
y = data[:,1]
x1 = data1[:,0]
y1 = data1[:,1]


fig = plt.figure(figsize=(5,5))
ax = fig.add_subplot(1,2,1)
ax.plot(x,y)
ax = fig.add_subplot(2,2,2)
ax.scatter(x1,y1)
plt.savefig('plots/Trayectory.png')
