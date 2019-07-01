#include <stdio.h>
int main()
{
    int a, b, c, n, i, s;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    for(s = a, i = 2; i <= n; i++)
        s = s * b + c;
    printf("%d", s);
    return 0;
}
