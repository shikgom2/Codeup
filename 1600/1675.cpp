#include <stdio.h>

int main()
{
	char chr; 

	while( scanf("%c", &chr) != EOF )
	{
		if(chr == ' ')
			printf(" ");
		else if(chr >= 'd')
			printf("%c", chr - 3);
		else if(chr == 'a')
			printf("x");
		else if(chr == 'b')
			printf("y");
		else if(chr == 'c')
			printf("z");
	}
	return 0;
}
