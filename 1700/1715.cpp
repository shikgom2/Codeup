#include <stdio.h>

int main()
{
	int i, a, b;
	scanf("%d %d", &a, &b);
	for(i = a; i > 1; i--)
	{
		if(a % i == 0 && b % i == 0)
		{
			a = a / i;
			b = b / i;
		}
	}
	
	printf("%d %d", a, b);
	return 0;
}
