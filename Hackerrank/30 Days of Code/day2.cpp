// cpp
// problem : https://www.hackerrank.com/challenges/30-operators/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double mc, t1, t2;
    cin >> mc >> t1 >> t2;
    cout << "The total meal cost is " << roundf(mc*(1.0 + (double)t1/100.0 + (double)t2/100.0)) << " dollars.";
    return 0;
}
