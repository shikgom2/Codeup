#include<stdio.h>

int main()
{
	int a, b, sum=0;
	
	scanf("%d %d", &a, &b);
	if(a==1) sum += 400;
	else if(a==2) sum += 340;
	else if(a==3) sum += 170;
	else if(a==4) sum += 100;
	else if(a==5) sum += 70;

	if(b==1) sum += 400;
	else if(b==2) sum += 340;
	else if(b==3) sum += 170;
	else if(b==4) sum += 100;
	else if(b==5) sum += 70;

	if (sum>500)
		printf("angry");
	else
		printf("no angry");
	return 0;
}
