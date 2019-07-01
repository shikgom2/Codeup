#include <stdio.h>

main()
{
	int n, i;
	scanf("%d",&n);
	
	for( i=2; i<n; i++)
		if( n % i == 0 )  // 하나라도 나눠지면
		{
			printf("not prime");
			return 0;
		}
	printf("prime");
	return 0;
}
