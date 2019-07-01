#include <stdio.h>

long long int n;

long long int abs(long long i)
{
    if(i>0)
    return i;
    else
        return i*-1;
}

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", abs(n));
  return 0;
}
