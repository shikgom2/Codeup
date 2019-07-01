#include <stdio.h>

int main()
{
	int a, b, c, d, e, mina, minb, min;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	if(a <= b && a <= c) mina = a;
	else if(b <= a && b <= c) mina = b;
	else mina = c;

	if(d < e) minb = d;
	else minb = e;

	min = mina + minb;
	printf("%.1lf", min * 1.1);
	return 0;
}
