#include <stdio.h>

int n;

bool zero(int k)
{
  return !k;
}

bool plus(int k)
{
 return k>0; 
}

int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("%s", plus(n)?"plus":"minus");
  return 0;
}
