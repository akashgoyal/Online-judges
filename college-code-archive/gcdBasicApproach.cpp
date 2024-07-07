/* Compute GCD of two numbers - basic approach - brute force */

#include<iostream>
#include<math.h>

int compGCD(int num1, int num2){
    int mn=(num1<num2)?num1:num2;
    for(int i=mn; i>=1; i--){
        if(num1%i==0 && num2%i==0)return i;
    }
}

int main(){
    int num1,num2;
    std :: cin >> num1 >> num2;
    int gcd = compGCD(num1,num2);
    std::cout<<"GCD of "<<num1<<" & "<<num2<<" is "<<gcd;
return 0;
}
