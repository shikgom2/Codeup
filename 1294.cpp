#include <stdio.h>

int main()
{
	char chr; 

	while( scanf("%c", &chr) != EOF )
	{
		if(chr == ' ')
			printf(" ");
		else if(chr <= 'w')
			printf("%c", chr + 3);
		else if(chr == 'x')
			printf("a");
		else if(chr == 'y')
			printf("b");
		else if(chr == 'z')
			printf("c");
	}
	return 0;
}
