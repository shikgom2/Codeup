#include <stdio.h>
#include <string.h>

int main()
{
	int n, i;
	char str[111];

	scanf("%d\n", &n);
	while( n-- )
	{
		scanf("%s", str);
		i = strlen(str);
		for( --i; i >= 0; i--)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}
