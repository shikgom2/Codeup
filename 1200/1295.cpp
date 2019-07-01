#include <stdio.h>

int main()
{
	char str[1000], i;
	
	scanf("%s", str);
	
	for(i = 0; str[i] != '\0'; i++)
	{
		if ('a' <= str[i] && str[i] <= 'z')
			printf("%c", str[i]-32);
		else if ('A' <= str[i] && str[i] <= 'Z')
			printf("%c", str[i]+32);
		else
			printf("%c", str[i]);		
	}
	return 0;
}

