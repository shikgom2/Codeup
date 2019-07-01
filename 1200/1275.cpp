#include <stdio.h>

int main()
{
	int n, k, i, mul = 1;

	scanf("%d %d", &n, &k);

	for ( i = 1 ; i <= k ; i++ )
		mul = mul * n;

	printf("%d", mul);
	return 0;
}
