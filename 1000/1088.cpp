#include <stdio.h>
int main()
{
    int i, j, k;
    int a, sum=0;
    scanf("%d",&a);
    
    for(i=1; i<=a; i++)
    {
        if (i%3==0) continue;
        printf("%d ",i);
    }
    return 0;
}
