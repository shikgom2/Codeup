#include<stdio.h>

int div[999], remain[999];

int chk_rec(int nowR, int end)
{
	for(int i = 1; i < end; i++)
		if(nowR == remain[i])
			return i;
	return 0;
}

main()
{
	int a, b, i, j, pos = 0;

	scanf("%d %d", &a, &b);
	printf("%d.", a / b);

	for(i = 1; ; i++)
	{
		a = a % b;
		pos = chk_rec(a, i);
		if(pos)
		{
			for(j = 1; j < pos; j++)
				printf("%d", div[j]);
			printf("(");
			for( ; j < i; j++)
				printf("%d", div[j]);
			printf(")");
			return 0;
		}
		remain[i] = a;
		a = a * 10;
		div[i] = a / b;
	}
}
