#include<stdio.h>
 
int main(void)
{
    int arr[5000001] = {};
 
    for (int i = 0; i < 5000000; i++)
        scanf("%d", &arr[i]);
 
    for (int i = 49; i < 5000000; i+=50)
        printf("%d ", arr[i]);
} 
