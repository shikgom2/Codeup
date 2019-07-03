#include<stdio.h>
 
int a[9][9], i, j, cnt, part;
 
void dfs(int y, int x, int color)
{
    if(a[y][x] == color)
    {
        part++;
        a[y][x] = -1;
        dfs(y - 1, x, color);
        dfs(y, x - 1, color);
        dfs(y, x + 1, color);
        dfs(y + 1, x, color);
    }
}
  
int main()
{
    for(i = 1; i <= 7; i++)
        for(j = 1; j <= 7; j++)
            scanf("%d", &a[i][j]);
 
    for(i = 1; i <= 7; i++)
        for(j = 1; j <= 7; j++)
            if (a[i][j] != -1)
            {
                part = 0;
                dfs(i, j, a[i][j]);
                if (part >= 3)
                    cnt++;
            }
 
    printf("%d", cnt);
    return 0;
}
