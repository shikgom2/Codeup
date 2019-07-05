#include <stdio.h>
unsigned long long k, n, x;
main()
{
    scanf("%llu", &k);
    while(k--){
        scanf("%llu", &n);
        x = 1;
        for(int i = 0; i < 100; i++)
            x = (x + (n / x) )/ 2;
        printf("%llu\n", x * x);
    }
}
