#include <stdio.h>

int n;
int sum = 0;
void f(int k)
{
  if(k <= 0) return;
  f(k-1);
  sum+= k;
}

int main()
{
  scanf("%d", &n);
  f(n);
  printf("%d", sum);
}
