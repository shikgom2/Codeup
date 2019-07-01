#include <stdio.h> 

int main() 
{
	int i,j,tmp;
	int n;
	
	scanf("%d", &n);
	int com[n];
	
	for(i=1 ; i<=n ;i++)	
	{
		scanf("%d", &com[i]);
	}
	for (i=1 ; i<= n ;i++)
	{
		printf("%d: ", i);
		for (j=1 ; j<=n ; j++)
		{
			if (i==j)
				continue;
			if (com[i] > com[j])
				printf("> ");
			else if (com[i] < com[j])
				printf("< ");
			else
				printf("= ");
		}
		printf("\n");
	}
	return 0;
}
