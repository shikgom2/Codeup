#include <stdio.h>

int a[27][27], b[27][27], i, j;

int main()
{
	for(i = 1; i <= 25; i++)
		for(j = 1 ;j <= 25; j++)
		{
			scanf("%d", &a[i][j]); 
			b[i][j] = 0;
		}

	for(i = 1; i <= 25; i++, puts(""))
		for(j = 1; j <= 25; j++)
		{
			b[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1] + a[i][j-1] + a[i][j+1] + a[i+1][j-1] + a[i+1][j] + a[i+1][j+1];
			if(a[i][j] == 0)
				b[i][j] = b[i][j] == 3 ? 1 : 0;
			else
				b[i][j] = (b[i][j] >= 4 || b[i][j] <= 1) ? 0 : 1;
			printf("%d ", b[i][j]);
		}
	return 0;
}
