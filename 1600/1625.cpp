#include <stdio.h>
 
int memo[100001];

main()
{
	int n, t, k, i;

	scanf("%d", &n);
	
	for(i = 0; i <= 100000; i++)
		if(i <= 9)	memo[i] = i;
		else {
			memo[i] = memo[i/10] + (i%10);
			if(memo[i] >= 10) memo[i] = 1 + (memo[i]%10);
		}

	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &k);
		printf("%d\n", memo[k]);
	}
}
