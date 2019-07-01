#include <stdio.h>

int main()
{
	int a, b, k, i, gap;

	scanf("%d %d %d", &a, &b, &k);
	gap = b - a;

	for( i = a ; i <= k ; i = i + gap)
		printf("%d ", i);
	return 0;
}
