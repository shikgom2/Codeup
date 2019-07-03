#include <stdio.h>
#include <math.h>

double check(double x,double y,double z)
{
	return (y * y) - (4 * x * z);
}

int main()
{
	double a, b, c, p;

	scanf("%lf %lf %lf", &a, &b, &c);
	p = check(a, b, c);

	if(p >= 0)
	{
		printf("%.2lf\n", ( -b + sqrt(p) ) / (2 * a) );
		if(p > 0)
		{
			printf("%.2lf\n", ( -b - sqrt(p) ) / (2 * a) );
		}
	}
	else if(p < 0)
	{
		double h = sqrt(-p) / (2 * a);
		printf("%.2lf+%.2lfi\n", ( -b / (2 * a) ), (h < 0 ? -h : h) );
		printf("%.2lf%.2lfi\n", ( -b / (2 * a) ), (h > 0 ? -h : h) );
	}
	return 0;
}
