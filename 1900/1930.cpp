#include <stdio.h>

int memo[22][22];

int f(int k, int n)
{
	if(memo[k][n]) return memo[k][n];
	if(k == 0) return n;
	
	for(int i = 1; i <= n; i++)
		memo[k][n] += f(k-1, i);

	return memo[k][n];
}

int main()
{
	int k, n;
	while( scanf("%d%d", &k, &n) != EOF )
		printf("%d\n", f(k, n) );

	return 0;
}
