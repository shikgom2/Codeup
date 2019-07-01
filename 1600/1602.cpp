#include <stdio.h>

int main()
{
	double a;
	scanf("%lf", &a);
	printf("%.10g", a < 0 ? -a : a);
}
