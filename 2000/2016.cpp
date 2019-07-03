#include<stdio.h>

int main()
{
	int n,i, r;
	char a[201];

	scanf("%d", &n);
	scanf("%s", a);

	r = n % 3;
	
	for(i = 0; i < n; i++)
	{
		if( i > 0 && (i % 3 == r) )
			printf(",");
		printf("%c", a[i]);
	}
	return 0;
}
