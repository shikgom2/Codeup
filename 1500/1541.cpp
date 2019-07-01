#include <stdio.h>

int n;
void f(int x)
{
  if(x == 0) printf("zero\n");
  else if(x>0) printf("positive");
  else printf("negative");
  return;
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
