#include <stdio.h>

int f(int k)
{
    if (k==1) return 1;
    return k * f(k-1);
}

int main()
{
    int n;
    
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
