#include <stdio.h>

int main(){

int i,j;
int arr[1000];
scanf("%d",&i);

for(j=0;j<i;j++)
{
    scanf("%d",&arr[j]);
}

for(j=0;j<i;j=j+2)
{
    if(arr[j]>arr[j+1])
        printf("%d ",arr[j]);
    else
        printf("%d ",arr[j+1]);
}
    return 0;
}

