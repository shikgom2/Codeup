#include<stdio.h>
#define L arr[i][j-1]
#define R arr[i][j+1]
#define U arr[i-1][j]
#define D arr[i+1][j]
 
int main()
{
    int n,m;
    int i,j,cnt;
    int arr[103][103];
 
    scanf("%d %d",&n,&m);
    for(i=0 ; i<=n+1 ; i++){
        for(j=0 ; j<=m+1 ; j++){
            if(i==0 || i==n+1 || j==0 || j==m+1) arr[i][j]=-1;
            else arr[i][j]=0;
        }
    }
    i=n;
    j=1;
    cnt=1;
    while(1){
        arr[i][j]=cnt;
        cnt++;
        if(L!=0 && R==0 && U!=0 && D==0) j++;
        else if(L!=0 && R!=0 && U!=0 && D==0) i++;
        else if(L==0 && R!=0 && U!=0 && D==0) i++;
        else if(L==0 && R!=0 && U!=0 && D!=0) j--;
        else if(L==0 && R!=0 && U==0 && D!=0) j--;
        else if(L!=0 && R!=0 && U==0 && D!=0) i--;
        else if(L!=0 && R==0 && U==0 && D!=0) i--;
        else if(L!=0 && R==0 && U!=0 && D!=0) j++;
        else break;
    }
 
    for(i=1 ; i<=n ; i++,puts("")){
        for(j=1 ; j<=m ; j++){
            printf("%d ",arr[i][j]);
        }
    }
}
