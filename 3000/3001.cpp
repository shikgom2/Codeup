#include <stdio.h>
int main(){

int i,j;
int arr[100000];
int cnt;

scanf("%d",&i);
for(cnt=0;cnt<i;cnt++){
	scanf("%d",&arr[cnt]);
}
scanf("%d",&j);

for(i=0;i<cnt;i++)
	if(arr[i]==j)
	{
		printf("%d",i+1);
		return 0;
	}
	printf("-1");
	return 0;
}
