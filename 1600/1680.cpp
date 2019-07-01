#include<stdio.h>

int main()
{
	int s, o, t;
	for(s = 1; s <= 9; s++)
		for(o = 0; o <= 9; o++)
			for(t = 1; t <= 9; t++)
				if ( s * 10 + o + s * 10 + o == t * 100 + o * 10 + o )
					printf("%d%d+%d%d=%d%d%d", s, o, s, o, t, o, o);
	return 0;
}
