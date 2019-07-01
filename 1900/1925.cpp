#include <stdio.h>
 
int combination(int n, int r)
{
    if(r==0 || n==r)
        return 1;
    else
        return combination(n-1, r-1)+combination(n-1, r);
}
 
int main(void)
{
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", combination(n, r));
}
