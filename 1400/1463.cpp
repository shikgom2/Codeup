#include <stdio.h>
int main()
{
    int arr[100][100]={};
    int a;
    int i,j;
    int cur;
    int cnt=1;
    int printnum = 1;
    scanf("%d",&a);
    cur = a;
    for(i=0;i<a;i++)
    {
        printnum = cur;
        for(j=0;j<a;j++)
        {
            printf("%d ",printnum);
            printnum = printnum+a;
        }
        printf("\n");
        cur--;
    }
    return 0;
}

