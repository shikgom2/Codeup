#include <stdio.h>

int n;

long long int f(int n)
{
    long long int s=0;
    for(long long int i=1 ; i<=n ; i++)
    {
        s+=i;
    }
    return s;
}
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
