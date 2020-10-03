#!/usr/bin/python
import numpy as np
import matplotlib.pyplot as plt

class MyRandom():
    def __init__(self, seed = 15, method='simple'):
        self.r = seed
        self.method = method
        
        if method == 'simple':
            self.a = 57
            self.c = 1
            self.M = 265
        elif method == 'drand48':
            self.a = int('5DEECE66D',16)
            self.c = int('B',16)
            self.M = 2**48
        else:
            print("Metodo no reconocido")
        
    def Random(self):
            
        r = (self.a*self.r + self.c)%self.M
        self.r = r 
        #print(self.a)
        return r / float(self.M)
    
    def TestMethod(self, Npoints, moment, seed_ = 32, method_ = 'simple'):
        
        rand = MyRandom(seed = seed_, method = method_)
        array = np.zeros(Npoints)
        
        for i in range(Npoints):
            array[i] = rand.Random()
            
        return np.sqrt(Npoints)* np.abs( np.mean(array**moment) - 1./(moment+1) )
