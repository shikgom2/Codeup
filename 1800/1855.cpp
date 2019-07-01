#include <stdio.h>

int n;

long long int f(int k)
{
  if(k <= 2) return 1;
  return f(k-2)+f(k-1);
}

int main()
{
  scanf("%d", &n);
  printf("%lld", f(n));
}
