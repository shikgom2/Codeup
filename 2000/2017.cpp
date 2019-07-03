#include <stdio.h>

void tor(int k, int r)
{
	int a[11111], ai = 0;

	while(k)
	{
		a[ai++] = k % r;
		k /= r;
	}

	while(ai--)
	{
		if(a[ai] >= 10)
			printf("%c", 'A' + a[ai] - 10);
		else
			printf("%d", a[ai]);
	}
}
 
int main()
{
	int n, r;
	scanf("%d%d", &n, &r);
	if(n == 0)
	{
		printf("0");
		return 0;
	}
	tor(n, r);
	return 0;
}

