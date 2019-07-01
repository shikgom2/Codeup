#include <stdio.h>

int n;
void f(int x)
{
  if(x == 1) printf("hello\n");
  else if(x == 2) printf("world\n");
  else printf("\n");
  return;
}
/**/
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
