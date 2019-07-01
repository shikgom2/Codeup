#include<stdio.h>
 
int main()
{
    int k,n,i,j,a[51][51],cnt=0;
    scanf("%d %d",&k,&n);
    for(i=1 ; i<=k ; i++)
        for(j=1 ; j<=k ; j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]>=6) a[i][j]=-1;
        }
    for(i=1 ; i<=k ; i++)
    {
        for(j=1 ; j<=k ; j++)
        {
            if(a[i][j]!=-1 && a[i][j]+n>=1 && a[i][j]+n<=5) cnt++;
        }
    }
    printf("%d",cnt);
}
