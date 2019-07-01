#include <stdio.h>
int main()
{
    int i, j, a;
    scanf("%x", &a);
    for(i=1; i<=15; i++)
    {
        printf("%X*%X=%X\n", a, i, a*i);
    }
    return 0;
 
}
