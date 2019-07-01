#include <stdio.h>
int main()
{
    int i,j;
    int max;
    scanf("%d %d",&i,&j);
    max = i*j;
    int cnt1,cnt2;

    for(cnt1=0;cnt1<i;cnt1++)
    {
        max = max - cnt1;
        for(cnt2=1;cnt2<=j;cnt2++)
        {
            printf("%d ",max);
            max = max - i;
        }
        printf("\n");
        max = i*j;
    }

    return 0;
}

