#include<stdio.h>

int main()
{
	int a[10],k,i,j,count=0;
	for(i=0;i<=9;i++){
		scanf("%d",&a[i]);
		if(i>=1&&a[i]-a[i-1]==0)count++;
		else if(i>=1&&a[i]-a[i-1]!=0){
			for(j=2;j<=9;j++){
				if(i>=j&&a[i-1]-a[i-j]!=0){
					k=a[i-j];
					break;
				}
			}
			if(a[i]-a[i-j]==0)count++;
		}
	}
	printf("%d",count);
	return 0;
}
