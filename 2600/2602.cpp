#include<stdio.h>
 
int main()
{
    int a[4][4], i, j;
 
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            a[i][j] = 0;
 
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
 
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            a[i][3] += a[i][j];
 
    for(i = 0; i < 4; i++)
        for(j = 0; j < 3; j++)
            a[3][i] += a[j][i];
 
    for(i = 0; i < 4; i++,puts(""))
        for(j = 0; j < 4; j++)
            printf("%d ", a[i][j]);
    return 0;
}
