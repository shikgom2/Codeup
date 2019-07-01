#include <stdio.h>

int main()
{
	int i, j;
	int a[1011];

	for(i=0; i<5; i++)
		scanf("%d",&a[i]);

	for(i=4; i>=0; i--)
		printf("%d ",a[i]);
	return 0;
}
