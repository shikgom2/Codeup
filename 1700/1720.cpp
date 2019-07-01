#include<stdio.h>
 
int main()
{
    int n, i, a[101], b[101], c[101], r[101], ra;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d %d %d %d",&a[i],&b[i],&c[i],&r[i]);
    }
    for(i=1 ; i<=n ; i++)
    {
        ra=a[i]<b[i]?(a[i]<c[i]?a[i]:c[i]):(b[i]<c[i]?b[i]:c[i]);
        if(r[i]==ra) continue;
        else
        {
            printf("%d %d",i,ra);
            break;
        }
    }
    if(i==n+1)
        printf("-1");
}
