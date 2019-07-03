#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( ) 
{
	int a, b, n, res, gap = 0x7fffffff, t;
	scanf("%d %d", &b, &n);
		
	for(a = 1; a <= 1000000 ;a++)
	{
		t = abs(pow(a, n) - b);
		if(gap ==0x7fffffff || gap >= t)
		{
			res = a;
			gap = t;
		}
		else break;
	}
	printf("%d", res);
	return 0;
}
