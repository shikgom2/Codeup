#include<stdio.h> 

int main()
{
	int i,x,y;
	
	scanf("%d %d",&x, &y);
	if(x / y > 0) x = x % y;
	for(i = 0; i < 10; i++)
	{
		x *= 10;
		printf("%d", x / y);
		x = x % y;
	}
	return 0;
}
