#include <stdio.h>

int n, k, d[1010];
int findi(int i)
{
	int idx;
	int cnt;
	for(cnt = 1 ; cnt<= n; cnt++)
	{
		if(d[cnt] == i)
		{
			return cnt;
		}
	}
	return -1;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", findi(k));
}
