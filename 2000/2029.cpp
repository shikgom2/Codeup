#include <stdio.h>

int a[20][1000001];

int main()
{	
	int n, i, j, r, c, last;

	scanf("%d %d", &r, &c);

	a[1][1] = a[1][2] = 1;
	last = 2;

	for(i = 2; i <= r; i++)
	{
		last = last * 2 - 1;
		for(j = 1; j <= last; j++)
		{
			if(j % 2 == 1)
				a[i][j] = a[i-1][j/2 + 1];
			else
				a[i][j] = a[i-1][j/2] + a[i-1][j/2+1];
		}
	}

	printf("%d", a[r][c]);
	return 0;
}
