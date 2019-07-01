#include <stdio.h>

int main(void)
{
	int num,i,j;
	scanf("%d", &num);
	for(i=1; i<num+1; i++)
	{
		for(j=0; j<num-i; j++)
			printf(" ");
		printf("*");

		for(j=0; j<(i-1)*2; j++)
			printf(" ");
		printf("*\n");
	}

	for(i=num; i>0; i--)
	{
		for(j=0; num-i>j; j++)
			printf(" ");
		printf("*");

		for(j=0; j<(i-1)*2; j++)
			printf(" ");
		printf("*\n");
	}
}
