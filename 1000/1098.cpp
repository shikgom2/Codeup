#include <stdio.h>

int h, w, n;
int l, d, x, y;
int i, j;
int map[2000][2000];

main()
{
	scanf("%d%d%d", &h, &w, &n);
	for(i=0; i < n; i++)
	{
		scanf("%d%d%d%d", &l, &d, &x, &y);
		if(d == 0)
		{
			for(j=y; j<y+l; j++)
				map[x][j] = 1;
		}
		else
		{
			for(j=x; j <x+l; j++)
				map[j][y] = 1;
		}		
	}
	
	for(i=1; i <= h; i++, puts(""))
		for(j=1; j <= w; j++)
		{
			printf("%d ", map[i][j]);
		}
}
