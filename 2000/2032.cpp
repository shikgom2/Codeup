// gbs91413's Solution

#include <stdio.h>

int main()
{
    char inp[30]={0};
    int tem[30]={0},out[10]={0};
    int a,b,l;
    scanf("%s",&inp);
     
    for(l=0;inp[l];l++){inp[l]-='0';}
     
    for(a=0;a<10;a++)
    {
        for(b=l-1;b>0;b--)
        {
            tem[b]+=inp[b]*2;
            if(tem[b]>9)
            {
                tem[b]-=10;
                tem[b-1]++;
            }
        }
        tem[0]+=inp[0]*2;
        if(tem[0]>9){
            tem[0]-=10;
            out[a]=1;
        }
        else{
            out[a]=0;
        }
        for(b=0;b<30;b++)
        {
            inp[b]=tem[b];
            tem[b]=0;
        } 
    }
    for(a=0;a<10;a++)
        printf("%d",out[a]);
    return 0;
}
