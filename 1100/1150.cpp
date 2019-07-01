#include <stdio.h>

int main()
{
	int a, b, c, min;
	
	scanf("%d %d %d", &a, &b, &c);
	min = a > b ? b : a;
	min = c > min ? min : c;
	printf("%d", min);
	return 0;
}
