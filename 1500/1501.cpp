#include <stdio.h>

int main()
{
    int a[101][101], i, j, n, m;

    scanf("%d %d", &n, &m);
    for( i=1 ; i<=n ; i++ )
       for( j=1 ; j<=m ; j++ )
          scanf("%d", &a[i][j]);

    for( i=1 ; i<=n ; i++ )
    {
       for( j=1 ; j<=m ; j++ )
          printf("%d ", a[i][j]);
       printf("\n");
    }
    return 0;
}

