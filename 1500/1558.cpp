#include <stdio.h>

long long int n;

long long int f(long long int r)
{    

    for(r=0;n!=0;n/=10)
    {
        r=n%10;
        printf("%lld",r);
    }
    exit(1);
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}
