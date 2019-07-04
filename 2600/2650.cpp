#include <stdio.h>

int main(void)
{
    int a, b, c, i, m=0;

    scanf("%d %d %d",&a,&b,&c);
    for(i=1; i<=1000 ; i++)
    {
        if(a%i==0 && b%i==0 && c%i==0)
        {
            if(m<i)
            {
                m=i;
            }
        }
    }
    printf("%d",m);
    return 0;
}


