#include<stdio.h>

int main()
{
	int sum, dsum=0,i, n, j;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		sum=0;
		for(j=1;j<=i;j++)
			sum+=j;

		dsum+=sum;
	}
	printf("%d",dsum);
	return 0;
}
