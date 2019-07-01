#include <stdio.h>

int main()
{
	int n, i, temp, count = 0;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		if (temp%2 == 0)
			count++;
	}
	printf("%d", count);
	return 0;
}
