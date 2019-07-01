#include <cstdio>
#include <algorithm>
using namespace std;
int func(int c)
{
if(c>=10)return 9;
    return c;
}
int main()
{
    int a[10][10],b[10][10]={0},player[1000][2],i,j,k,x,y,n;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]<0)b[i][j]=-1;
        }
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&player[i][0],&player[i][1]);
        player[i][0]-=1;
        player[i][1]-=1;
        b[player[i][0]][player[i][1]]=i+1;
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(a[i][j]<=0)continue;
            for(k=j;k>=max(0,j-a[i][j]);k--){
                if(a[i][k]<0)break;
                b[i][k]=-2;
            }
            for(k=j;k<=func(j+a[i][j]);k++){
                if(a[i][k]<0)break;
                b[i][k]=-2;
            }
            for(k=i;k>=max(0,i-a[i][j]);k--){
                if(a[k][j]<0)break;
                b[k][j]=-2;
            }
            for(k=i;k<=func(i+a[i][j]);k++){
                if(a[k][j]<0)break;
                b[k][j]=-2;
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d ",b[i][j]);
        }
        puts("");
    }
    puts("Character Information");
    for(i=0;i<n;i++){
        int x=player[i][0],y=player[i][1];
        if(b[x][y]==-2){
            printf("player %d dead\n",i+1);
        }
        else printf("player %d survive\n",i+1);
    }
    return 0;
}
