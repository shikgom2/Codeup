#include <stdio.h>

int n, m;

int min(int i, int j)
{
	if(i > j)
	{
		return j;
	}
	else
		return i;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", min(n, m));
}
