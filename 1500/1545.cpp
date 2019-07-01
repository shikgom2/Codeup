#include <stdio.h>

int n;

int zero(int i)
{
	if(i == 0)
		return true;
	else
		return false;
}
int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("non zero");
  return 0;
}
