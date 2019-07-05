#include <stdio.h>

int main(){

	long long int i;
	scanf("%lld",&i);
	i+=1;
	
	long long int j = i*3 -1;
	long long int k = j * i;
	
	long long int s = k/2;
	
	printf("%lld",s%1000000004);
	return 0;
}
