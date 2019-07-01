#include <stdio.h>

int main()
{
	int arr[255], i = 0, j, n;

	scanf( "%d", &n );

	if ( n == 0)
	{
		printf("0");
		return 0;
	}
	
	while ( n > 0)
	{
		arr[ i ] = n % 2;
		n = n / 2;
		i++;
	}
	
	for( j = i - 1 ; j >= 0 ; j--)
		printf("%d", arr[j] );

	return 0;
}
