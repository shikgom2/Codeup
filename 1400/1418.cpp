#include <stdio.h>

int main()
{
	char a[100], i, n;
	scanf("%s", &a);
	for(i=0; a[i]!='\0' ; i++)     
	    if (a[i] == 't' )   
        	printf("%d ", i+1);
}
