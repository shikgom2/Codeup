#include <stdio.h>

int n;

void f(int k) 
{
  printf("%s\n", k%2==0?"even":"odd");
}
/**/
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
