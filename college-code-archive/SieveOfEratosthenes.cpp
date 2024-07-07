/* find all the prime numbers in a given range(1 to N)
using 'Sieve of Eratosthenes'
*/

#include<iostream>
#include<math.h>

bool* sieve (int n){
    bool prime[n+1];
    for(int i=0; i<(n+1); i++)prime[i]=true;
    prime[0]=false;
    prime[1]=false;
    int m=sqrt(n);

    for(int i=2; i<=m; i++){
        if(prime[i]){
            for(int k=i*i; k<=n; k+=i) prime[k]=false;
        }
    }
    for(int i=0; i<(n+1); i++){
        if(prime[i])std ::cout<< i <<" ";
    }

    return prime;
}

int main(){
    int N;
    std :: cin>>N;
    sieve(N);

return 0;
}
