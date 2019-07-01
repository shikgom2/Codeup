#include <stdio.h>
int main()
{
    int i, j, a, b;
    scanf("%d %d", &a, &b);
    for(i=1; i<=a; i++)
        for(j=1; j<=b; j++)
            printf("%d %d\n", i, j);
    return 0;
}
