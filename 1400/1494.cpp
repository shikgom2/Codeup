#include<stdio.h>
 
int d[102];
int nSize, kSect;
 
 
int main()
{
    int i;
    int st,en,uData;
    int tSum=0;
    scanf("%d %d",&nSize,&kSect);
    for(i=1 ; i<=kSect ; i++){
        scanf("%d %d %d",&st,&en,&uData);
        d[st]+=uData;
        d[en+1]-=uData;
    }
    for(i=1 ; i<=nSize ; i++){
        printf("%d ",d[i]);
    }
    puts("");
    for(i=1 ; i<=nSize ; i++){
        tSum+=d[i];
        printf("%d ",tSum);
    }
}
