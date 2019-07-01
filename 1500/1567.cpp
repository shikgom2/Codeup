#include <stdio.h>

int n, a, b, d[1010];

long long subsetsum(int i, int j)
{
	long long sum = 0;
	
	int idx;
	for(idx = i; idx <= j; idx++)
	{
		sum+=d[idx];
	}
	return sum;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%lld\n", subsetsum(a, b));
}
