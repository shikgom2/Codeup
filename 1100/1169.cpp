#include <stdio.h>

int main()
{
	int age, year;
	
	scanf("%d", &age);
	
	year = 2012 - age + 1;
	
	if (year < 2000)
		printf("%d 1", year%100);
	else
		printf("%d 3", year%100);
	return 0;
}
