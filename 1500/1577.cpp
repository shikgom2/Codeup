#include <stdio.h>

int myabs(int n)
{
    if(n < 0) 
    	return -n;
    else
    	return n;
}
main()
{
    int a;
    scanf("%d", &a);
    printf("%d", myabs(a));
}
