#include<stdio.h>
int main()
{
	int i,j,n,d[110][110],a=1;
    scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
    	{
	      d[i][j]=a++;
	   }	
	}
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
    	{
	     printf("%d ",d[i][j]);
	   }
	   printf("\n");	
	}
}
