#include <stdio.h>
#include <stdlib.h>
#include "RSA_header.h"


int gcd(int a,int b)
{
	int temp;
	while(1)
	{
		temp=a%b;
		if(temp==0)
		{
			return b;
		}
		a=b;
		b=temp;
	}
}

int mod_inverse(int a,int b)
{
	a=a%b;
	for(int i=1;i<b;i++)
	{
		if((a*i)%b == 1)
		{
			return i;
		}
	}
}

//(x^y)%z
int mod_exp(long int x,int y,int z)
{
	int result=1;
	x=x%z;
	while(y>0)
	{
		if(y&1) 		//if y is odd
		{
			result = (result*x)%z;
		}
		y=y>>1;		//y=y/2
		x = (x*x)%z;
	}
	return result;
}
