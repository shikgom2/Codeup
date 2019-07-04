#include<stdio.h>
 
main() {
    int n, i;
    long long t = 0;
 
    scanf("%d", &n);
 
    for (i = n / 3 + (n % 3 != 0);i < n / 2 + n % 2;i++)
        t += i - ((n - i) / 2 + (n - i) % 2) + 1;
 
    printf("%lld", t);
 
}
