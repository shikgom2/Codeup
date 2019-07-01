#include <stdio.h>

int main()
{	
	int a, cnt=0, num;
	
	scanf("%d", &a);
	
	num = a;
	
	if ( a % 10 == 3 || a % 10 == 6 || a % 10 == 9 )
		cnt++;
	
	a = a / 10;
	if ( a % 10 == 3 || a % 10 == 6 || a % 10 == 9 )
		cnt++;
	
	a = a / 10;
	if ( a % 10 == 3 || a % 10 == 6 || a % 10 == 9 )
		cnt++;
	
	if ( cnt == 1) printf("K");
	else if ( cnt == 2) printf("KK");
	else if ( cnt == 3) printf("KKK");
	else printf("%d", num);
	return 0;
}
