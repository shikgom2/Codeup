#include <cstdio>
#include <cmath>
 
int main()
{
    int n,i,a,b,ai;
    double ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(b*log(a)>ans)
        {
            ans=b*log(a);
            ai=i+1;
        }
    }
    printf("%d",ai);
    return 0;
}
