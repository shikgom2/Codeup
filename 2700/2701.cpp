#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    int arr[5];
    int cnt;
    int min = 500;
    int tmp;
    scanf("%d",&i);


    for(cnt=0;cnt<5;cnt++)
    {
        scanf("%d",&arr[cnt]);
    }

    for(cnt=0;cnt<5;cnt++)
    {
        if(arr[cnt] > i)
            tmp = arr[cnt]-i;
        else
            tmp = i-arr[cnt];

        if(min > tmp){
            min = tmp;
          //  printf("Min = %d\n",min);
    }
    }
    printf("%d",min);
    return 0;
}

