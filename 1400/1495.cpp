#include<stdio.h>
 
int d[1002][1002];
 
int pSum[1002];
int cSum[1002];
 
int main()
{
    int nSize,mSize,kSect;
    int i,j,k;
    int x1,y1,x2,y2,uData;
    scanf("%d %d %d",&nSize,&mSize,&kSect);
    for(i=1 ; i<=kSect ; i++){
        scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&uData);
        d[x1][y1]+=uData;
        d[x2+1][y2+1]+=uData;
        d[x1][y2+1]-=uData;
        d[x2+1][y1]-=uData;
    }
 
    for(i=0 ; i<nSize ; i++,puts("")){
        for(j=0 ; j<mSize ; j++){
            printf("%d ",d[i][j]);
        }
    }
    puts("");
    for(i=0 ; i<nSize ; i++,puts("")){
        for(j=0 ; j<mSize ; j++){
            cSum[j]=cSum[j-1]+d[i][j];
            printf("%d ",cSum[j]+pSum[j]);
            pSum[j]+=cSum[j];
        }
    }
}
