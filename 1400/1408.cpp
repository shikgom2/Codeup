#include <stdio.h>
int main()
{
	char s[21];
	int i;
	
	scanf("%s", &s);
	for (i=0; s[i]!='\0'; i++)
		printf("%c", s[i] + 2);
	
	puts("");
	
	for (i=0; s[i]!='\0'; i++)
		printf("%c", (s[i] * 7) % 80 + 48);

	return 0;
}
