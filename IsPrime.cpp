/* Check if a number is prime or not */

#include <iostream>
#include<math.h>

bool isPrime(int n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    int m=sqrt(n);
    std::cout<<m<<"\n";

    for(int i=0; i<m; i+=2) if(n%i==0) return false;

    return true;
}

int main(){
    int num; bool var;
    std :: cin>>num;
    var = isPrime(num);
    if(var) std :: cout <<"Is Prime";
    else std :: cout <<"Is Not Prime";

return 0;
}
