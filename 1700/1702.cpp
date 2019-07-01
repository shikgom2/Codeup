#include <stdio.h>

int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if ( b % 2 == 0 )
		printf("%d%d%d %d%d%d", a, b, c, a, b, c);
	else
		printf("%d%d%d", a, b, c);
	return 0;
}
