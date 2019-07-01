#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d.%d.%d", &a, &b, &c);
    printf("%02d-%02d-%04d", c, b, a);
    return 0;
}
