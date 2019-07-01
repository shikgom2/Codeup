#include<stdio.h>
 
int main()
{
	int a, b, i, sum = 0;
	scanf("%d %d", &a, &b);

	for(i = a; i <= b; i++)
	{
		if (i % 3 == 0)
			sum = sum + i;
		if (i % 4 == 0)
			sum = sum - i;
	}
	printf("%d ", sum);
	return 0;
}
