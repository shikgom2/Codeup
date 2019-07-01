#include <stdio.h>
                 
int f(int k)
{
    if (k <= 1) return 1;
    else return k*f(k-1);
}

main()
{
    int n,r;
    scanf("%d%d", &n, &r);
    printf("%d", f(n) / f(r) / f(n-r) );
      
    return 0;
}
