#include <stdio.h>

int n, i, j, a, b;
int map[20][20];

main()
{
	scanf("%d", &n);
	for(i=0; i < n; i++)
	{
		scanf("%d%d", &a, &b);
		map[a][b] = 1;
	}
	
	for(i=1; i <= 19; i++)
	{
		for(j=1; j <= 19; j++)
		{
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
}
