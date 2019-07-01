#include <stdio.h>

int n;

void f(int k)
{
  if(k <= 0) return;
  f(k-1);
  printf("*");
}

int main()
{
  scanf("%d", &n);
  f(n);
}
