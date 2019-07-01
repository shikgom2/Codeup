#include <stdio.h>

int main()
{
	int n, i, cnt = 0;
	for( i = 0; i < 10; i++ )
	{
		scanf("%d", &n);
		if ( n % 5 == 0)
		{
			printf("%d", n);
			return 0;
		}
	}
	printf("0");
	return 0;
}
