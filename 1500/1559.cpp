#include <stdio.h>

int n, m;

long long int f(int p, int q)
{
  return (long long int)p+q; //주의! 그냥 합하면 int형으로 계산됨 
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}
