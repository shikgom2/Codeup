#include <stdio.h>

int main()
{
	int a[11], i, k;
	for(i = 1; i <= 10; i++)
		scanf("%d", &a[i]);
	scanf("%d", &k);
	printf("%d", a[k]);
	return 0;
}
