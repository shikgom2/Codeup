#include <stdio.h>

int n;

void f(int x)
{
  if(x == 0) printf("false\n");
  else printf("true");
  return;
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
