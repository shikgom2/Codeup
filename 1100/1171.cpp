#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (b<10)
		printf("%d0%d", a, b);
	else
		printf("%d%d", a, b);
	
	if (c<10)
		printf("00%d", c);
	else if (c<100)
		printf("0%d", c);
	else
		printf("%d", c);
	
	return 0;
}
