#include<stdio.h>
 
int i, j, k, cnt, a, b;
int arr[25][999999];

int main()
{
	scanf("%d %d", &a, &b);
	arr[1][1] = 1;
	for( i = 0; i <= b; i++)
		arr[i][0] = -1;

	for ( i = 2; i <= b; i++)
	{
		cnt = 0;
		k = 1;
		for( j = 1; !(arr[i-1][j-1] == 0 && arr[i-1][j] == 0); j++)
		{
			if (arr[i-1][j-1] == arr[i-1][j] || arr[i-1][j-1] == -1)
				cnt++;
			else
			{
				arr[i][k] = arr[i-1][j-1];
				k++;
				arr[i][k] = cnt;
				k++;
				cnt = 1;
			}
		}
	}

	for(i = a; i <= b; i++,puts(""))
		for(j = 1; j <= 999998; j++)
			if(arr[i][j] == 0)
				break;
			else
				printf("%d ", arr[i][j]);
 
 	return 0;
}
