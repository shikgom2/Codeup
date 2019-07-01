#include <stdio.h>

int main()
{
	int ymd, sung;
	
	scanf("%d %d", &ymd, &sung);
	
	ymd = ymd / 10000;
	if (sung <= 2)
		ymd = ymd + 1900;
	else
		ymd = ymd + 2000;
	
	printf("%d", 2012 - ymd + 1);
	return 0;
}
