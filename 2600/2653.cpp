#include <stdio.h>
int main()
{
    int i;
    int arr[21] = {0,2,3};
    scanf("%d",&i);
    for(int j = 3;j<=20; j++)
    {
        arr[j] = arr[j-1] + arr[j-2];
    }
    printf("%d",arr[i]);
}

