#include<stdio.h>
 
int main()
{
	int a, k, i, m = 0;
	scanf("%d", &k);
	for(i=0; i < k; i++)
	{
		scanf("%d", &a);
		if ( a > m ) 
			m = a;
	}
	printf("%d", m);
	return 0;
}
