#include<stdio.h> 

int main() 
{
	int time, a, b, cnt, rest;

        scanf("%d %d %d",&time, &a, &b);

	cnt = (90 - time) / 5;
	rest = (90 - time ) % 5;

	a = a + cnt;

	if (rest != 0)
		a++;

	if (a > b)
		printf("win");
	else if (a == b)
		printf("same");
	else
		printf("lose");
	return 0;
}
