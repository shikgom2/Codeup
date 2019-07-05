#include <stdio.h>
int ar[1000001]={};
int main()
{
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	for(i=2;i<=b/2;i++) {
		for(j=2;i*j<=b;j++) {
			ar[i*j]=1;
		}
	}
	for(i=a;i<=b;i++) {
		if(ar[i]!=1) printf("%d ",i);
	}
}

