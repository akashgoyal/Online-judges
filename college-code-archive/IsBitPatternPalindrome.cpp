/*
Any integer number is given as input
Tell if the binary representation of the decimal number is palindrome
Ex:-
15 = 1111 in binary
16 = 10000 in binary
so,
15 : Bit Pattern is palindrome
16 : Bit Pattern is not palindrome
*/

#include<iostream>

int countBits(unsigned int x)
{
    return (x>1)?1+countBits(x/2):0;
}

bool isKthBitSet(unsigned int x, unsigned int k)
{
	return (x & (1<<(k-1)))?true:false;
}

bool isPalindrome(unsigned int x)
{
	int l=1;
	int r= countBits(x)+1;
	while(l<r)
	{
	  if(isKthBitSet(x,l) != isKthBitSet(x,r)) return false;
	  l++; r--;
	}
	return true;
}

int main()
{
	int x; bool res=false;
	std::cout<<"enter the number : ";
	std::cin>>x;
	res =isPalindrome(x);
	if(res)	std::cout<<"Bit pattern is Palindrome";
	else std::cout<<"Bit pattern is not Palindrome";
	return 0;
}
