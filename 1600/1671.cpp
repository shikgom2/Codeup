#include <stdio.h>

int main()
{
	int a, b, res, t;
	
	scanf("%d %d", &a, &b);
	
	if (a) t = a;
	
	a = 0;
	b = (3 + b - t) % 3;
	
	if (b==0) printf("무승부");
	else if (b==1) printf("승리");
	else printf("패배");
	return 0;
}
