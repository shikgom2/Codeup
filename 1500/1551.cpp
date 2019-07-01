#include <stdio.h>

int n, d[100010], k;

int f(int i){
	
	int idx;
	
	for(idx = 1 ; idx<=n;idx++)
	{
		if(d[idx] == i)
		{
			return idx;
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
  printf("%d\n", f(k));
}
