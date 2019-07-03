#include<stdio.h>
 
main()
{
    int i, j, n;
    char G[11][11];
    for(i = 0; i < 10; i++)
        for(j = 0; j < 10; j++)
            G[i][j]=' ';
 
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        n = n /10;
        for(j = 0; j < n; j++)
            G[i][j] = '#';
    }
 
    for(i = 9; i >= 0; i--, puts(""))
        for(j = 0; j < 10; j++)
            printf("%c ", G[j][i]);
}
