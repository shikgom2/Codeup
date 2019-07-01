#include <stdio.h>
int main()
{
    long long i, j;
    long long a, b, b2, c;

    scanf("%lld %lld %lld %lld", &a, &b, &b2, &c);
    for(i=a, j=1; ;j++, i=(i*b)+b2)
        if(j==c) break;

    printf("%lld", i);
    return 0;
}
