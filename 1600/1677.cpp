#include <stdio.h>

int main()
{
	int r, c, i, j;

	scanf("%d %d", &c, &r);
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			if(i == 0 || i == r-1) 
			{
				if(j == 0 || j==c-1)
					printf("+");
				else
					printf("-");
			}
			else if(j == 0 || j == c-1)
				printf("|");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
