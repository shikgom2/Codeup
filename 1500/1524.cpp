#include <cstdio>
int a[11][11],r,c,sum,i,j;
int main()
{
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&r,&c);
    if(a[r][c]==1)printf("-1");
    else{
        sum+=a[r-1][c]+a[r-1][c-1]+a[r-1][c+1];
        sum+=a[r+1][c]+a[r+1][c-1]+a[r+1][c+1];
        sum+=a[r][c-1]+a[r][c+1];
        printf("%d",sum);
    }
    return 0;
}
