#include <stdio.h>

int main()
{
	int n, i, temp, sum=0;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		if (temp%5 == 0)
			sum = sum + temp;
	}
	printf("%d",sum);
	return 0;
}
