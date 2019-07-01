#include<stdio.h>

int main()
{
	int n;
        
        again:
	scanf("%d", &n);
	printf("%d\n", n);

	if(n != 0) 
		goto again;

	return 0;
}
