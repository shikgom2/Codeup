#include<stdio.h>

int main() 
{
	int n, i, j, map[21][21];

	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		scanf("%d", &map[i][1]);

	for(i = 2; i <= n; i++)
		for(j = 2; j <= i; j++)
			map[i][j] = map[i][j-1] - map[i-1][j-1];

	for(i = 1; i <= n; i++, puts(""))
		for(j = 1; j <= i; j++)
			printf("%d ", map[i][j]);
	return 0;
}
