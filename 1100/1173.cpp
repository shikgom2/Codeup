#include <stdio.h>

int main()
{
	int hour, min, total;

	scanf("%d %d", &hour, &min);

	total = hour * 60 + min;
	total = total - 30;
	if ( total < 0 )
	{ 
		hour = 23;
		min = 60 + total;
	}
	else
	{
		hour = total / 60;
		min = total % 60;
	}
	
	printf("%d %d", hour, min);
	return 0;
}
