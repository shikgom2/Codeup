#include <stdio.h>

main()
{
	int h, b, c, s;
	double r = 0;
	scanf("%d %d %d %d", &h, &b, &s, &c);
	r = h * b * s * c;
	printf("%.1lf MB", r/8/1024/1024);

}
