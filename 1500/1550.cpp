#include <stdio.h>

long long int n;

int sqrt(long long int a)
{
if(a < 0) return -1;
    if(a == 0) return 0;
    int i = 0;
    for(;a >= 0;++i)
    {
        a -= 2*i + 1;
    }
    return i-1;
}
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}
