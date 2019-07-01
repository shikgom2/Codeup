#include <stdio.h>

int main()
{
	int n, i;
	
	scanf("%d", &n);
	
	if ( n == 0 )
		printf("0");
	else
	{
		while( n )
		{
			printf("%d", n % 10);
			n = n / 10;		
		}
	}
	return 0;
}
