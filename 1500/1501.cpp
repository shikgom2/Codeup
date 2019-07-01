#include <stdio.h>

int main()
{
	int a[51][51], i, j, n, k = 1;
	
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
			a[i][j] = k++;

	for(i = 1; i <= n; i++,puts(""))
		for(j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
	return 0;
}
