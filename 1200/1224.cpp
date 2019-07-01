#include<stdio.h>
 
int main()
{
	int a, b, c, d;
	double q, w;
 
	scanf("%d %d %d %d", &a, &b, &c, &d);

	q = (double)a / b;
	w = (double)c / d;

	if (q > w) printf(">");
	else if (q < w) printf("<");
	else printf("=");
	
	return 0;
}
