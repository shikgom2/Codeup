#include <stdio.h>

int n;

void f(int k)
{
  if(k <= 0) return;
  f(k-1);
  printf("%d ", k);
}

int main()
{
  scanf("%d", &n);
  f(n);
  printf("\n");
}
