#include<stdio.h>
int main()
{
    int i,k,n,a[100000],b[100000],p;
    scanf("%d %d",&k,&n);
    
    for(i=0;i<n;i++)
    	scanf("%d %d",&a[i],&b[i]);
    scanf("%d",&p);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==p) p=b[i];
        else if(b[i]==p) p=a[i];
    }
    
    printf("%d",p);
}
