#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d", &n);
    for(i=1; ; i++)
    {
        if ( n >= i*i && n < (i+1)*(i+1) )
        {
            printf("%d %d", n-i*i, i);
            return 0;
        }
    }
}
