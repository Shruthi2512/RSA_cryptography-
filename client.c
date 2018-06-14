#include <stdio.h>
#include <stdlib.h>

void main()
{

		int p=9973,q=9967;
		long int c = 52990082;
		int n = p*q;
		int phi = (p-1)*(q-1);
		int e = 2;

		while(e<phi)
		{
			if(gcd(e,phi)==1)
				break;
			else
				e++;
		}
		printf("Public key: (%d %d)\n",n,e);
		int d = mod_inverse(e,phi);
		printf("Private key: (%d %d)\n",n,d);
		long int M = mod_exp(c,d,n);
		printf("Decrypted message: %ld\n",M);


}