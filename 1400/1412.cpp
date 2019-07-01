#include <stdio.h>  

int main()  
{
	char c, j;
	int chk[255], i;

	for(i=0; i<=255; i++)
		chk[i] = 0;

	for(;~scanf("%c", &c);)
		chk[c]++;

	for(j = 'a'; j <= 'z'; j++)
		printf("%c:%d\n", j, chk[j]);
	return 0;
}
