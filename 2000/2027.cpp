#include <stdio.h>

int main()
{
	int a[10001], i, n;

	scanf("%d", &n);

	a[1] = a[2] = 1;
	for(i = 3; i <= n; i++)
		a[i] = a[ a[i-1] ] + a[ i - a[i-1] ];

	printf("%d", a[n]);
	return 0;
}
