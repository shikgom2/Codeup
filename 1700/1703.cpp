#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);
	printf("%d %d %d", a / 3600, a % 3600 / 60, a % 3600 % 60);
	return 0;
}
