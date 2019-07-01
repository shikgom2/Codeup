#include <stdio.h>
 
int f(int a, int b) 
{
    if (a == b) return a;
    if (a > b) return f(a/2, b);
    if (a < b) return f(a, b/2);
}
 
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", f(a, b));
    return 0;
}
