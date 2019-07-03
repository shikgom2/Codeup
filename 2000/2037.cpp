#include <stdio.h>
int main()
{
	int i;
	
	scanf("%d",&i);
	int temp=i;
	printf("{");
	for(i;;i++){
		
		if(i/temp==1)
		printf("%d",i);
		
		if((i+1)/temp==1)
		printf(", ");
		
		else{
		printf("}");
		return 0;
	}
	}

	return 0;
}
