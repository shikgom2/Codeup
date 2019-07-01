#include <stdio.h>

int n, i, j, k, a, b;
int map[20][20];

int main()
{
	for(i=1; i <= 19; i++)
		for(j=1; j <= 19; j++)
			scanf("%d", &map[i][j]);
	
	scanf("%d", &n);
	for(i=0; i < n; i++)
	{
		scanf("%d%d", &a, &b);
		for(j=1; j <= 19; j++)
			if(map[a][j] == 1) map[a][j]=0;
			else map[a][j]=1;
		for(j=1; j <= 19; j++)
			if(map[j][b] == 1) map[j][b]=0;
			else map[j][b]=1;
	}
	
	for(i=1; i <= 19; i++, puts(""))
		for(j=1; j <= 19; j++)
		{
			printf("%d ", map[i][j]);
		}
}
