/* Compute square of a number without using *./,pow()
even : n=2*x;  n2=4*x2
odd : n=2*x+1; n2=(4*x2)+(4*x)+1
*/


#include<iostream>
#include<math.h>

int square(int n)
{
  int x=0;
  if(n==0 || n==1)return 1;
  x=n>>1;
  std::cout<<x<<"\n";
  if(n&1){
    return ((square(x)<<2) + (x<<2) + 1);
  }
  else{
    return (square(x)<<2);
  }
}

int main()
{
  int n,x;
  std::cin>>n;
  int res = square(n);
  std::cout<<"the square of "<<n<<" is "<<res;
return 0;
}
