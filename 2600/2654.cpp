#include <stdio.h>
int main()
{
    int i;
    int arr[100001] = {0,2,3};
    scanf("%d",&i);
    for(int j = 3;j<=i; j++)
    {
        arr[j] = (arr[j-1] + arr[j-2]) % 1000000007;
    }
    printf("%d",arr[i]);
}


