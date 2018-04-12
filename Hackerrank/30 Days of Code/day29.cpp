#cpp
#problem : https://www.hackerrank.com/challenges/30-bitwise-and/problem

#include <iostream>
using namespace std;

int main()
{
    int t,n,k;
    cin >> t;
    while(t-- > 0){
        cin >> n >> k;
        int a = k - 1;
        int b = (~a) & -(~a);
        if ((a | b) > n) cout << (a - 1) << endl;
        else cout << a << endl;
        /*
        if (k | (k - 1) > n) cout << k - 1 << endl;
        else cout << k << endl;
        */
    }
    return 0;
}
