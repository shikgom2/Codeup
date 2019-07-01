#include <stdio.h>
int main()
{
    int arr[100][100]={};
    int a,b;
    int i,j;
    int cur;
    int cnt=1;
    int printnum;
    scanf("%d %d",&a,&b);
    printnum = a*b;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",printnum);
            printnum --;
        }
        printf("\n");
    }
    return 0;
}

