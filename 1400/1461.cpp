#include <stdio.h>
int main()
{
    int arr[100][100];
    int i,j;
    int a;
    int count;
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        count = a*i;
        for(j=1;j<=a;j++)
        {
            printf("%d ",count);
            count--;
        }
        printf("\n");
    }
    return 0;
}

