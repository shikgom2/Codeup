#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = a*60 + b - 30 + 60*24;
    printf("%d %d", c/60%24, c%60);
}
