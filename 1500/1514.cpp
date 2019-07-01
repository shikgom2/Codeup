#include<stdio.h>
 
int main()
{
    int x1, y1, x2, y2, x3, y3, a[8][8]={0}, i, j;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    scanf("%d %d",&x3,&y3);
 
    for(i=1 ; i<=7 ; i++)
        a[4][i]=1;
 
    if(x1==4)
    {
        for(i=1 ; i<=7 ; i++)
        {
            a[i][y1]=1;
        }
    }
 
    if(x2==4)
    {
        for(i=1 ; i<=7 ; i++)
        {
            a[i][y2]=1;
        }
    }
 
 
    if(x3==4)
    {
        for(i=1 ; i<=7 ; i++)
        {
            a[i][y3]=1;
        }
    }
 
    if(a[x1][y1]==1)
    {
        for(i=1 ; i<=7 ; i++)
        {
            a[i][y1]=1;
            a[x1][i]=1;
        }
    }
 
    if(a[x2][y2]==1)
    {
        for(i=1 ; i<=7 ; i++)
        {
            a[i][y2]=1;
            a[x2][i]=1;
        }
    }
 
    if(a[x3][y3]==1)
    {
        for(i=1 ; i<=7 ; i++)
        {
            a[i][y3]=1;
            a[x3][i]=1;
        }
    }
 
    if(a[x1][y1]==1)
    {
        for(i=1 ; i<=7 ; i++)
        {
            a[i][y1]=1;
            a[x1][i]=1;
        }
    }
 
    if(a[x2][y2]==1)
    {
        for(i=1 ; i<=7 ; i++)
        {
            a[i][y2]=1;
            a[x2][i]=1;
        }
    }
 
    if(a[x3][y3]==1)
    {
        for(i=1 ; i<=7 ; i++)
        {
            a[i][y3]=1;
            a[x3][i]=1;
        }
    }
 
    a[x1][y1]=2;
    a[x2][y2]=2;
    a[x3][y3]=2;
 
    for(i=1 ; i<=7 ; i++)
    {
        for(j=1 ; j<=7 ; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}
