#include <stdio.h>
#include <string.h>

int isShort(char *s) {
	return strlen(s) <= 3 ? 1 : 0;
}

int istap(char *s) {
	for(int i = 0; i < strlen(s) - 2; i++)
		if( strncmp(s+i, "tap", 3) == 0 )
			return 1;
	return 0;
}

int isxocure(char *s) {
	for(int i = 0; i < strlen(s) - 5; i++)
		if( strncmp(s+i, "xocure", 6) == 0 )
			return 1;
	return 0;
}

int main()
{
	int n, cnt = 0;
	char str[999];

	scanf("%d\n", &n);
			
	for(int i = 0; i < n; i++)
	{
		gets(str);
		if ( isShort(str) || istap(str) || isxocure(str) )
		{
			puts(str);
			cnt++;
		}
	}

	if(cnt <= 3) puts("safe");
	else if(cnt <= 6) puts("warning");
	else puts("danger");

	return 0;
}
