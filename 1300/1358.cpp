#include<stdio.h>

int main()
{
	int n, i, j;
	scanf( "%d",&n );
	for(i = 0 ;i<n/2+1;i++)
	{
		for( j = 0 ; j < n / 2 - i ; j++ )
			printf( " " );
		for( j = 0 ; j < i * 2 + 1 ; j++ )
			printf( "*" );
		printf( "\n" );
	}
	return 0;
}
