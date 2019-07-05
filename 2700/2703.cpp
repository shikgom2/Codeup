#include <stdio.h>


int main( )
{
    int i;
    int arr[10000];
    scanf("%d",&i);

    int cnt;
    int high=0,low=0;

    for(cnt=0;cnt<i;cnt++)
    {
        scanf("%d",&arr[cnt]);
    }

    for(cnt=0;cnt<(i-1);cnt++)
    {
        if(arr[cnt] < arr[cnt+1])
            high ++;
        else if(arr[cnt] > arr[cnt+1])
            low ++;
    }
    printf("%d %d",high,low);
    return 0;
}

