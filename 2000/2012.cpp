#include <stdio.h> 

int main()
{
	int a, b, i, j, num, one, cnt = 0;

	scanf("%d %d", &a, &b);

	for( i = a ; i <= b ; i++)
	{
		num = i;
		one = 0;
		while( num > 0 )
		{
			if ( num % 10 == 1)
				one++;
			num = num / 10;
		}
		cnt = cnt + one;
	}

	printf("%d", cnt);
	return 0;
}
