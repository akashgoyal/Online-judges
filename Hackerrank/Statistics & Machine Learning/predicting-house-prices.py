# Python Solution
#Problem statement : https://www.hackerrank.com/challenges/predicting-house-prices

import sys
import numpy as np

def inputTrainData(f, ntrain):
    x = np.zeros([ntrain, f], dtype=float)
    y = np.zeros([ntrain, 1], dtype=float)
    for i in range(ntrain):
        farr = input().split()
        y[i] = float(farr[f])
        for j in range(f):
            x[i][j] = float(farr[j])
    return x, y


def inputTestData(ntest ,f):
    X = np.array([input().split() for _ in range(ntest)], float)
    return X


def normalEquation(x, y):
    return np.dot(np.linalg.pinv(np.dot(np.transpose(x), x)), np.dot(np.transpose(x),y))


def predict(xtest, theta):
    return np.sum(np.multiply(np.transpose(theta), xtest), 1)


def main():
    #read all inputs
    f,ntrain = map(int, input().split())
    #train data
    xtrain, ytrain = inputTrainData(f, ntrain)
    #test data
    ntest = int(input())
    xtest = inputTestData(ntest, f)
    
    # weight/theta variables to be computed
    theta = np.zeros([1 , f], dtype=float)
    
    #Prepend bias terms in matrix
    xtrain = np.concatenate((np.ones([ntrain, 1], dtype=float),xtrain), 1)
    xtest = np.concatenate((np.ones([ntest, 1], dtype=float),xtest), 1)
    
    #Linear Regression or Normal Equation. Lets go with NE
    theta = normalEquation(xtrain, ytrain)
    
    #Calculate Out for testSet using the estimated parameters
    output = predict(xtest, theta)
    
    #print Output
    for i in range(len(output)):
        print(output[i])
    
if __name__ == '__main__':
    sys.exit(main())