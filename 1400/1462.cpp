#include <stdio.h>
int main()
{
    int arr[100][100]={};
    int a;
    int i,j;
    int cnt=1;
    int printnum = 1;
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        printnum = i+1;
        for(j=0;j<a;j++)
        {
            if(j ==0)
            {
                printf("%d ",printnum);
            }
            else{
            printnum = printnum + a;
            printf("%d ",printnum);
            }
        }
        printf("\n");
    }
    return 0;
}

