#include <stdio.h>

int i, j, k, a[10000];
int main()
{
    scanf("%d",&k);

    for(i=0; i<k; i++)
        scanf("%d", &a[i]);
     
    for(i=k-1; i>=0; i--)
        printf("%d ", a[i]);

    return 0;
}
