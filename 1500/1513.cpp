#include <stdio.h>

int main()
{
    int x,y,n,a[100][100]={0},k=1,i,j;
    scanf("%d",&n);
    x=n-1;y=0;
    while(k!=n*(n+1)/2+1){
        while(a[x][y]==0&&x>=0&&y<n){
            a[x][y]=k++;
            x--;y++;
        }
        x+=2;y--;
        while(a[x][y]==0&&x<n&&y>=0){
            a[x][y]=k++;
            x++;y--;
        }
        x--;y+=2;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        puts("");
    }
    return 0;
}
