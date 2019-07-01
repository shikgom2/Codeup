#include <stdio.h>
int main()
{
    int n, i, j, c=1, a[50][50];

    scanf("%d", &n);
    for(i = 0; i < n; i++)
   {
        if( i % 2 == 0 )
       {
            for(j = 0; j < n; j++)
           {
                a[i][j] = c;
                c++;
            }
        }
        else
       {
            for(j = n-1; j >= 0; j--)
           {
                a[i][j] = c;
                c++;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
       for(j = 0; j < n; j++)
       {
            printf("%d ",a[i][j]);
       }
       printf("\n");
    }
   return 0;
}
