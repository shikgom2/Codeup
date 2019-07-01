#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    double d,e,f;
    scanf("%lf %d",&d,&a);
    scanf("%lf %d",&e,&b);
    scanf("%lf %d",&f,&c);
    printf("%0.1lf",a*d+b*e+c*f);
}

