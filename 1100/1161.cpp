#include<stdio.h>  
int main()
{  
	int a, b;
	scanf("%d %d", &a, &b);
	
	if(a % 2 == 1)
		printf("홀수");
	else 
		printf("짝수");
	
	printf("+");
	
	if(b % 2 == 1) 
		printf("홀수");
	else 
		printf("짝수");
	
	printf("=");
	
	if( (a+b) % 2 == 1)
		 printf("홀수");
	else 
		printf("짝수");
	return 0;
}  
