#include<stdio.h>
 
int main()
{
    int n,m,i,j,k,sum;
    int a[102][102];
    int cnt=0;
    int row=0;
    scanf("%d %d",&n,&m);
    sum=n+m;
    for(i=2 ; i<=sum ; i++){
        for(j=1 ; j<=m ; j++){
            for(k=1 ; k<=n ; k++){
                if(j+k==i){
                    a[k][j]=++cnt;
                }
            }
        }
    }
 
    for(i=n ; i>=1 ; i--,puts("")){
        for(j=1 ; j<=m ; j++){
            printf("%d ",a[i][j]);
        }
    }
}

