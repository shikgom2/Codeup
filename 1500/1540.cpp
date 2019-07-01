#include <stdio.h>

int n;
void f(int x)
{
  if(x == 0) printf("zero\n");
  else printf("non zero");
  return;
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
