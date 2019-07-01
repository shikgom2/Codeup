#include <stdio.h>

int n, arr[10000001], m, i, t;

int main()
{
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &t);
		arr[t] = 1;
	}

	scanf("%d", &m);
	for(i = 0; i < m; i++)
	{
		scanf("%d", &t);
		printf("%d ", arr[t]);
	}	
	return 0;
}
