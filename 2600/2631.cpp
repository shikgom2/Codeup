#include <stdio.h>
int main()
{
	int n,i,s,e,sum,k;
	int a[100001],c= 0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    s=0,e=0;
    sum=a[0];
    while(e<n)
    {
        if(sum<k)
            {
                e++;
                sum+=a[e];
            }
        if(sum==k)
            {
                c++;
                sum-=a[s];
                s++;
                if(s>e)
                    e++;
            }
        if(sum>k)
            {
                sum-=a[s];
                s++;
                if(s>e)
                    e++;
            }
    }
    printf("%d",c);
}

