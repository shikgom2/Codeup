#include <stdio.h>

int main()
{
	int r,e,c;
	scanf("%d %d %d", &r, &e, &c);

	if(r > e - c)
		printf("do not advertise");
	else if( r < e - c)
		printf("advertise");
	else
		printf("does not matter");
	return 0;
}
