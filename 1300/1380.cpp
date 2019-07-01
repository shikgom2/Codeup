#include <stdio.h> 

int main()
{
	int a, i, j;

	scanf("%d", &a);

	for( i = 1 ; i <= 6 ; i++)
		for( j = 1 ; j <= 6 ; j++)
			if ( i + j == a)
				printf("%d %d\n", i, j);
	return 0;
}
