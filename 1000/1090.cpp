#include <stdio.h>

int main() 
{
    int a, b, c, i;
    scanf("%d%d%d", &a, &b, &c);
    for(i = 1 ; i < c; i++)
    {
        a *= b;
    }
    
    printf("%d", a);
}
 
