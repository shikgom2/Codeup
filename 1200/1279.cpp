#include <stdio.h>

int main()
{
	int i, a, b, min, max, sum = 0;

	scanf("%d %d", &a, &b);
	if (a>=b) { 
		max=a; 
		min=b;
	}
	else
	{
		max=b;
		min=a;
	}

	for(i = min; i <= max; i++)
		if(i%2 == 1)
			sum += i;
		else
			sum -= i;

	printf("%d", sum);
	return 0;
}
