#include <stdio.h>

int memo[201];

int f(int k)
{
    if (memo[k]) return memo[k];
    if (k <= 2) return 1;    
    return memo[k] = ( f(k-1) + f(k-2) ) % 10009;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n));

    return 0;
}

