#include <stdio.h>

int main()
{
	int arr[9];
	
	int i;
	int max = -1000;
	int idx;
	for(i = 0 ;i<9;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i = 0 ;i<9;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
			idx = i+1;
		}
	}
	printf("%d\n%d", max, idx);
	
}
