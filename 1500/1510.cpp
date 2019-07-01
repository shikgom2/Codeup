#include<stdio.h>

int main()
{
	int n, i, j, d[50][50], m = 1, a, b;

	scanf("%d", &n);
	for(i = a = 0, b = n / 2; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			d[a][b] = m++;
			if(j == n - 1) break;
			a = (a - 1 + n) % n;
			b = (b + 1) % n;
		}
		a = (a + 1) % n;
	}

	for(i = 0; i < n; i++, puts(""))
		for(j = 0; j < n; j++)
			printf("%d ", d[i][j]);
	return 0;
}
