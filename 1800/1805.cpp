#include <stdio.h>

int arr[101];

int main()
{
	int n, i, a, b;

	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d%d", &a, &b);
		arr[a] = b + 1;
	}

	for(i = 1; i <= 100; i++) 
		if ( arr[i] ) 
			printf("%d %d\n", i, arr[i] - 1);
	return 0;
}
