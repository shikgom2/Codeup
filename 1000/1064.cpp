#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%c", &a, &b, &c);
    printf("%d\n", a<b ? (a<c?a:c) : (b<c?b:c) );
    return 0;
}
