#include <stdio.h>

long long int f()
{
     return -2147483649LL;
}

int main()
{
    printf("%lld", f());
    return 0;
}
