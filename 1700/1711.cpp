#include<stdio.h>
 
int main()
{
	int x1, y1, x2, y2, x3, y3;
	scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
	
	if ( (x1 <= x3 && x3 <= x2) && (y1 <= y3 && y3 <= y2) )
		printf("충돌");
	else
		printf("비충돌");
	return 0;
}
