#include<stdio.h>

int main() 
{
	char icon[][4] = {"*x*", " xx", "* *"};
	int i, j, k, l, n;

	scanf("%d", &n);
	for(i = 0; i < 3; i++)
		for(k = 0; k < n; k++, puts(""))
			for(j = 0; j < 3; j++)
				for(l = 0; l < n; l++)
					printf("%c", icon[i][j]);	
	return 0;
}
