#include <stdio.h>

int main()
{
    int i;
    int j;
    int temp;
    scanf("%d",&i);
    int max=0,min=32888;
    int maxtemp,mintemp;
    for(j=0;j<i;j++)
    {
        scanf("%d",&temp);

        if(max<temp)
        {
            max=temp;
            maxtemp=j+1;
        }
        if(min>=temp)
        {
            min=temp;
            mintemp=j+1;
        }
    }
    printf("%d : %d\n",maxtemp,max);
    printf("%d : %d",mintemp,min);

    return 0;
}

