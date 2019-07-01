#include<stdio.h>

int map[10][10];

int range(int a, int b)
{
    if(a<=0 || a>=10 || b<=0 || b>=10) return 1;
    else return 0;
}

int main()
{
    int i,j,a1,a2,b1,b2,c1,c2,d1,d2,cnt=0;
    scanf("%d %d %d %d %d %d %d %d",&a1,&a2,&b1,&b2,&c1,&c2,&d1,&d2);
    for(i=c1 ; i<=d1 ; i++)
    {
        for(j=c2 ; j<=d2 ; j++)
        {
            map[i][j]=3;
        }
    }
    if(map[a1][a2]==3) map[a1][a2]=4;
    else map[a1][a2]=1;
    if(map[a1][a2]==4)
    {
        for(i=c1 ; i<=d1 ; i++)
        {
            for(j=c2 ; j<=d2 ; j++)
            {
                map[i][j]=2;
            }
        }
        for(i=a1-2 ; i<=a1+2 ; i++)
        {
            for(j=a2-2 ; j<=a2+2 ; j++)
            {
                if(range(i,j)) continue;
                map[i][j]=2;
            }
        }
        map[a1][a2]=4;
    }
    else
    {
        for(i=a1-2 ; i<=a1+2 ; i++)
        {
            for(j=a2-2 ; j<=a2+2 ; j++)
            {
                if(range(i,j)) continue;
                if(map[i][j]==3) continue;
                else map[i][j]=2;
            }
        }
        map[a1][a2]=1;
    }
    for(i=b1-2 ; i<=b1+2 ; i++)
    {
        for(j=b2-2 ; j<=b2+2 ; j++)
        {
            if(range(i,j)) continue;
            if(map[i][j]==1 || map[i][j]==4)
            {
                printf("0");
                return 0;
            }

        }
    }
    map[b1][b2]=5;
    for(i=b1-2 ; i<=b1+2 ; i++)
    {
        for(j=b2-2 ; j<=b2+2 ; j++)
        {
            if(range(i,j)) continue;
            else map[i][j]=7;
        }
    }
    for(i=1 ; i<=9 ; i++)
    {
        for(j=1 ; j<=9 ; j++)
        {
            if(map[i][j]==2) cnt++;
        }
    }
    printf("%d",cnt+1);
}


