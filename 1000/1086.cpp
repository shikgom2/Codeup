#include <stdio.h>

main()
{
	int h, b, c, s;
	double r;
	scanf("%d %d %d", &h, &b, &s);
	r = h * b * s;
	printf("%.2lf MB", r/8/1024/1024);

}
