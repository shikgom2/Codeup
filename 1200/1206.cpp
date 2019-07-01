#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a%b==0)
		printf("%d*%d=%d", b, a/b ,a);
	else if(b%a==0)
		printf("%d*%d=%d", a, b/a ,b);
	else
		printf("none");
	return 0;
}
