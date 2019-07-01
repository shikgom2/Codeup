#include <stdio.h>

int n, a, b, d[1010];
int maxi(int i,int j)
{
	int idx;
	int max = -2147483648;
	int val;
	for(idx = i; idx <= j; idx++)
	{
		if(max < d[idx])
		{
			val = idx;
			max = d[idx];
		}
	}
	return val;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b));
}
