#include <stdio.h>
int main()
{
	int i;
	char arr[101] = {};
	
	scanf("%s",arr);
	
	printf("%c",arr[0]);
	for(i = 0 ; i<101; i++)
	{
		if(arr[i] == ',')
		{
			printf("%c",arr[i+1]);
		}
	}
	return 0;
}
