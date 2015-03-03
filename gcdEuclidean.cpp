/* Compute GCD of two numbers - Euclidean's Theorem */

#include<iostream>
#include<math.h>

int euclidGCD(int num1, int num2){
    if(num2==0)return num1;
    return euclidGCD(num2,num1%num2);
}

int main(){
    int num1,num2,gcd;
    std::cin >> num1 >> num2;
    if(num1>num2){ gcd = euclidGCD(num1,num2); }
    else { gcd = euclidGCD(num2,num1); }
    std::cout <<"GCD of "<<num1<<" & "<<num2<<" by Euclids Theorem is "<<gcd;


return 0;
}
