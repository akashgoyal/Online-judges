#Python solution
#Problem Statement : https://www.hackerrank.com/challenges/battery/problem

#!/bin/python3

import sys
import numpy as np

trainData = np.array([[2.81,5.62], [7.14,8.00], [2.72,5.44], [3.87,7.74], [1.90,3.80], [7.82,8.00], [7.02,8.00], [5.50,8.00], [9.15,8.00], [4.87,8.00], [8.08,8.00], [5.58,8.00], [9.13,8.00], [0.14,0.28], [2.00,4.00], [5.47,8.00], [0.80,1.60], [4.37,8.00], [5.31,8.00], [0.00,0.00], [1.78,3.56], [3.45,6.90], [6.13,8.00], [3.53,7.06], [4.61,8.00], [1.76,3.52], [6.39,8.00], [0.02,0.04], [9.69,8.00], [5.33,8.00], [6.37,8.00], [5.55,8.00], [7.80,8.00], [2.06,4.12], [7.79,8.00], [2.24,4.48], [9.71,8.00], [1.11,2.22], [8.38,8.00], [2.33,4.66], [1.83,3.66], [5.94,8.00], [9.20,8.00], [1.14,2.28], [4.15,8.00], [8.43,8.00], [5.68,8.00], [8.21,8.00], [1.75,3.50], [2.16,4.32], [4.93,8.00], [5.75,8.00], [1.26,2.52], [3.97,7.94], [4.39,8.00], [7.53,8.00], [1.98,3.96], [1.66,3.32], [2.04,4.08], [11.72,8.00], [4.64,8.00], [4.71,8.00], [3.77,7.54], [9.33,8.00], [1.83,3.66], [2.15,4.30], [1.58,3.16], [9.29,8.00], [1.27,2.54], [8.49,8.00], [5.39,8.00], [3.47,6.94], [6.48,8.00], [4.11,8.00], [1.85,3.70], [8.79,8.00], [0.13,0.26], [1.44,2.88], [5.96,8.00], [3.42,6.84], [1.89,3.78], [1.98,3.96], [5.26,8.00], [0.39,0.78], [6.05,8.00], [1.99,3.98], [1.58,3.16], [3.99,7.98], [4.35,8.00], [6.71,8.00], [2.58,5.16], [7.37,8.00], [5.77,8.00], [3.97,7.94], [3.65,7.30], [4.38,8.00], [8.06,8.00], [8.05,8.00], [1.10,2.20], [6.65,8.00]])

#it doesnot matter for how long you charge, the maximum capacity of battery is 8hours
#so keep only the minimum x for which y=8. And discard the rest
trainData = np.array([[2.81,5.62], [3.99,7.98], [3.97,7.94], [3.97,7.94], [3.87,7.74], [3.77,7.54], [3.65,7.30], [3.53,7.06], [3.47,6.94], [3.45,6.90], [3.42,6.84], [2.72,5.44], [2.58,5.16], [2.33,4.66], [2.24,4.48], [2.16,4.32], [2.15,4.30], [2.06,4.12], [2.04,4.08], [2.00,4.00], [1.99,3.98], [1.98,3.96], [1.98,3.96], [1.90,3.80], [1.89,3.78], [1.85,3.70], [1.83,3.66], [1.83,3.66], [1.78,3.56], [1.76,3.52], [1.75,3.50], [1.66,3.32], [1.58,3.16], [1.58,3.16], [1.44,2.88], [1.27,2.54], [1.26,2.52], [1.14,2.28], [1.11,2.22], [1.10,2.20], [0.80,1.60], [0.39,0.78], [0.14,0.28], [0.13,0.26], [0.02,0.04], [0.00,0.00]])


def normalEquation(x, y):
    return np.dot(np.linalg.pinv(np.dot(np.transpose(x), x)), np.dot(np.transpose(x),y))

def predict(testX, theta):
    return np.sum(np.multiply(np.transpose(theta), testX), 1)

def main():
    trainX = trainData[:, :-1]
    trainY = trainData[:,-1]
    lenDataset = len(trainX)
    
    # weight/theta variables to be computed
    theta = np.zeros([1 , 1], dtype=float)
    #Prepend bias terms in matrix
    trainX = np.concatenate((np.ones([lenDataset, 1], dtype=float), trainX), 1)
    #Linear Regression or Normal Equation. Lets go with NE
    theta = normalEquation(trainX, trainY)
    
    #Calculate Out for testSet using the estimated parameters
    timeCharged = float(input().strip())
    testX = [[timeCharged]]
    testX = np.concatenate((np.ones([1, 1], dtype=float),testX), 1)
    output = predict(testX, theta)
    
    #print Output
    for i in range(len(output)):
        if output[i]>8.0:
            output[i]=8.0
        print(output[i])
    
if __name__ == '__main__':
    sys.exit(main())