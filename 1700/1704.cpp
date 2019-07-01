#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	a = a / 10000;
	b = b / 1000000;

	if ( b <= 2 )
		a = a + 1900;
	else
		a = a + 2000;

	if ( b == 1 || b == 3 )
		printf("%d M", 2012 - a + 1);
	else 
		printf("%d F", 2012 - a + 1);
	return 0;
}
