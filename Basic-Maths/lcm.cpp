/* Compute LCM of two numbers */

#include<iostream>
#include<math.h>

int euclidGCD(int num1, int num2){
    if(num2==0)return num1;
    return euclidGCD(num2,num1%num2);
}

int lcm(int num1,int num2){
    return (num1*num2)/euclidGCD(num1,num2);
}

int main(){
    int num1,num2,val;
    std::cin>>num1>>num2;
    if(num1>num2) val = lcm(num1,num2);
    else val = lcm(num2,num1);
    std::cout<<"The LCM of "<<num1<<" & "<<num2<<" is "<<val;

return 0;
}
