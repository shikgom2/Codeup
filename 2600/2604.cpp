#include <stdio.h>
#include <string.h>
#include <math.h>

char F[10];

int GCD(int a, int b)
{
	if(a==0) return b;
	return GCD(b%a, a);
}

int main()
{
	int len, u=0, d, gcd;
	
	scanf("%s", F);	
	
	len = strlen(F)-2;
	
	for(int i=2; i<len+2; i++)
		u += (F[i]-'0') * pow(10,len-i+1);
		
	d = pow(10, len);
	
	gcd = GCD(u, d);
	
	printf("%d %d", u/gcd, d/gcd);
	return 0;
}
