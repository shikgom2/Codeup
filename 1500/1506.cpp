#include<stdio.h>

int arr[16][16];

int main()
{
	int n,i,j,cnt=1;
	scanf("%d",&n);

	i=1; j=1;
	while(1){



        while(arr[i][j]==0&&i<=n){
		arr[i][j]=cnt++;
		i++;}

		i--; j++;

		while(arr[i][j]==0&&j<=n){
		arr[i][j]=cnt++;
		j++;}

		i--; j--;

		while(i>=1&&arr[i][j]==0){
		arr[i][j]=cnt++;
		i--;}

		i++; j--;

		while(arr[i][j]==0){
		arr[i][j]=cnt++;
		j--;}

		i++; j++;

		if(cnt>n*n) break;
	}

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
