#include <stdio.h>

int main()
{
	double i, a, b;

	scanf("%lf %lf", &a, &b);

	for(i = a; i <= b; i+=0.01)
		printf("%.2lf ", i);
}
