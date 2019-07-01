#include <stdio.h>
#include <string.h>

int main()
{
    int b;
    char a[1001];
    gets(a);
    b = strlen(a);
    printf("%d", b);
    return 0;
}
