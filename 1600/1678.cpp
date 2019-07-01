#include <stdio.h>
int main()
{
	int arr[5][5];
	int i,j;
	int max=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			if(arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j+1]+arr[i+1][j+2]+arr[i+2][j+2]>max)
			max=arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j+1]+arr[i+1][j+2]+arr[i+2][j+2];
		}
	}
	printf("%d",max);
	
	return 0;
}
