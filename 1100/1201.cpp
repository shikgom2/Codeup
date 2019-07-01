#include <stdio.h> 
 
int main()
{  
	int a;
	scanf("%d", &a);
	
	if(a > 0) 
		printf("양수");
	else if(a < 0)
		printf("음수");
	else 
		printf("0");

	return 0;	
}  
