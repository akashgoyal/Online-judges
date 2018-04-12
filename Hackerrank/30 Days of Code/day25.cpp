// cpp
// problem : https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void isPrime(unsigned long int n){
    if(n==0 || n==1){
        cout << "Not prime\n";
        return;
    }
    for(unsigned long int i=2; i*i<=n; i++){
        if(n % i == 0){
            cout << "Not prime\n";
            return;
        }
    }
    cout << "Prime\n";
}


int main() {
    int t;
    long int n;
    cin >> t;
    while(t-- > 0){
        cin >> n;
        isPrime(n);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
