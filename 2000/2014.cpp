#include <stdio.h>  
  
int main()  
{
	int a, b, c;

	for(a = 1; a <= 9; a++)
		for(b = 0; b <= 9; b++)
			for(c = 1; c <= 9; c++)
				if( (100*a + 10*b + c) - (10*a + b) == 10*c + c )
					printf("%d%d%d-%d%d=%d%d\n", a, b, c, a, b, c, c);
	return 0;
}
