#include <stdio.h>
int main()
{
	long i;
	int j;
	int sum=0;
	
	scanf("%ld",&i);
	
	for(j=0;j<10;j++){
		sum+=i%10;
		i=i/10;
	}
	if(sum%7==4)
	printf("Bad");
	else
	printf("Good");
	
	return 0;
}
