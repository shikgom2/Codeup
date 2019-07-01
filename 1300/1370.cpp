#include <stdio.h>

int main()
{
    int h, r, i, j, k;
    scanf("%d %d", &h, &r);

    for(i=1; i<=r; i++)
   {
        for(j=0; j<h; j++)
       {
            for(k=0; k<j; k++)
                printf(" ");
            puts("*");
        }
        for(j=h-1; j>0; j--)
        {
            for(k=1; k<j; k++)
                printf(" ");
            puts("*");
        }
    }
    return 0;
}
