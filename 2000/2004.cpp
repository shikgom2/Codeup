#include<stdio.h>

int main()
{
	int a, b, c, d, i, j, k, l;
	char s1, s2;
	scanf("%d%d%d%d", &a, &b, &c, &d);

	for(i = 0; i < a; i++)
		for(j = 0; j < c; j++,puts(""))
		{
			if(i % 2 == 0) 
				s1 = 'X', s2 = '.';
			else s1 = '.', 
				s2 = 'X';

			for(k = 0; k < b; k++)
				for(l = 0; l < d; l++)
					if(k % 2 == 0)
						printf("%c", s1);
					else
						printf("%c", s2);
		}
	return 0;
}
