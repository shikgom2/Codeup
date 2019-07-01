#include <stdio.h>

int main()
{
	int i, n, cnt = 0; 

	scanf("%d", &n);

	for(i = 1; i <= n; i++)
	{
		if ( i % 10 == 1 )
			cnt++;
	}

	printf("%d", cnt);
	return 0;
}
