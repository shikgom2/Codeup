#include <stdio.h>

int main()
{
	int a, b;
	char c;
	
	scanf("%d%c%d", &a, &c, &b);
	if(c == '+') printf("%d", a+b);
	if(c == '-') printf("%d", a-b);
	if(c == '*') printf("%d", a*b);
	if(c == '/') printf("%.2f", (float)a/b);
	
	return 0;	
}
