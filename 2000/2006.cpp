#include<stdio.h>

int main()
{	
	int a, b, c, d, s, nikky, byron, nr, br;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &s);

	nikky= (a-b) * (s/(a+b));
	nr= s-(s/(a+b)) * (a+b);
	byron= (c-d) * (s/(c+d));
	br= s-(s/(c+d)) * (c+d);

	if (nr <= a) nikky += nr;
	else nikky += (a-(nr-a));

	if(br<=c) byron += br;
	else byron += (c-(br-c));

	if(nikky > byron) printf("Nikky");
	else if(nikky<byron) printf("Byron");
	else printf("Tied");
	return 0;
}
