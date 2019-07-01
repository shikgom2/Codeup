#include<stdio.h>
 
int pSum[102];
int tSum[102];
int arr[102][102];
 
int main()
{
    int n,m,i,j,t,s=0;
    scanf("%d %d",&n,&m);
    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=m ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1 ; i<=n ; i++,puts("")){
        for(j=1 ; j<=m ; j++){
            tSum[j]=tSum[j-1]+arr[i][j];
            printf("%d ",pSum[j]+tSum[j]);
            pSum[j]=pSum[j]+tSum[j];
        }
    }
}
