#include <stdio.h>

void myswap(int *a, int *b)
{
    int t;
    if (*a > *b) {
        t = *a;
        *a = *b;
        *b = t;
    }
}
main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}
