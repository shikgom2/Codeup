#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	if(a % 7 == 0)
		printf("multiple");
	else
		printf("not multiple");
	return 0;
}
