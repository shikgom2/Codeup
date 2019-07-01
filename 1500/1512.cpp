#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int x, y;

int abs(int a){ return a>0?a:-a; }
int d(int a, int b){ return abs(a-x)+abs(b-y)+1;}

int main()
{
    int n;
    scanf("%d%d%d", &n, &x, &y);
    for(int i = 1 ; i <= n ; i++, puts("") )
    {
        for(int j = 1 ; j <= n ; j++ )
        {
            printf("%d ", d(i,j));
        }
    }
}

