#Python Solution
#Problem statement : https://www.hackerrank.com/challenges/predicting-office-space-price/problem

"""
# This commented area is also a working code but based on sklearn

import numpy as np
import pandas as pd
from sklearn import linear_model as lm
from sklearn import preprocessing as pp

F, N = map(int, input().split())
train = np.array([input().split() for _ in range(N)], float)
T = int(input())
test = np.array([input().split() for _ in range(T)], float)

mod = lm.LinearRegression()
XtoP = pp.PolynomialFeatures(3, include_bias=False)
mod.fit(XtoP.fit_transform(train[:, :-1]), train[:, -1])

ymod = mod.predict(XtoP.fit_transform(test))
print(*ymod, sep='\n')
"""

from numpy import *

F,N=[int(i) for i in input().split()]
A=zeros((N, F+1))
b=zeros(N)

#constructing the input-entry table
for i in range(N):
    curr_val = [float(j) for j in input().split()]
    for j in range(F):
        A[i, j] = curr_val[j]
    b[i] = curr_val[F]
    A[i, F] = 1

#calculating the coefficients 
cof = linalg.lstsq(A, b)[0]

#calculating the predictions
T = int(input())
for i in range(T):
    x = [float(j) for j in input().split()]
    preds = dot(cof[:F],x)+cof[F]
    print(round(preds,2))