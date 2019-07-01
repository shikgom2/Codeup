#include<stdio.h>

int main()
{
	int n, i, num;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		if (i == 1)
			printf("%d ",num);
		if (i == n / 2 + 1)
			printf("%d ",num);
		if (i == n)
			printf("%d ",num);
	}
	return 0;
}
