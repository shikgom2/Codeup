#include <stdio.h>
int main()
{
	int i,j;
	
	scanf("%d %d", &i,&j);
	
	
	int arr[1000001]={};
	int idx;
	for(idx = 0; idx<i;idx++)
	{
		scanf("%d", &arr[idx]);
		
	}
	for(idx = 0; idx<i;idx++)
	{
		if(arr[idx] == j)
		{
			printf("%d",idx+1);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
