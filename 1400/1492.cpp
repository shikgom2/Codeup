#include <stdio.h>
int main()
{
    int i;
    int arr[100];
    int cnt;
    int sum=0;

    scanf("%d",&i);

    for(cnt=0;cnt<i;cnt++)
    {
        scanf("%d",&arr[cnt]);
    }
    for(cnt=0;cnt<i;cnt++)
    {
        sum = sum + arr[cnt];
        printf("%d ",sum);
    }
    return 0;
}

