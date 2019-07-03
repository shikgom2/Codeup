#include <stdio.h> 

int main()
{
	int cnt = 0, a, b, i, j, k;

	scanf("%d %d", &a, &b);
	for( i = a ; i <= b ; i++)
	{
		j = i;
		cnt = 0;
		while ( j > 0 )
		{
			if ( j % 10 == 3 || j % 10 == 6 || j % 10 == 9 )
				cnt++;
			j = j / 10;
		}

		if ( cnt == 0 )
			printf("%d\n", i);
		else
		{
			for ( k = 1 ; k <= cnt ; k++)
				printf("K");
			printf("\n");
		}
	}
	return 0;
} 
