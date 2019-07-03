#include<cstdio>

int a[5000000];

int main()
{
	int i,n,j=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=(j*10+7)%n;
		if(j==0)break;
		if(a[j])break;
		a[j]=i;
	}
	if(j==0)for(;i--;)printf("7");
	else
	{
		for(;i>a[j];i--)printf("7");
		for(;i--;)printf("0");
	}
	return 0;
}
