#include <stdio.h>
#include <string.h>

int main()
{
	int l1, l2;
	char str1[101], str2[101];
	int i;
	
	scanf("%s %s", str1, str2);
	l1 = strlen(str1);
	l2 = strlen(str2);
	
	if (l1 > l2) 
		printf("%s %s", str2, str1);
	else if (l1 < l2)
		printf("%s %s", str1, str2);
	else {
		for(i = 0; i < l2; i++)
			if (str1[i] > str2[i]) {
				printf("%s %s", str2, str1);
				return 0;
			}
			else if (str1[i] < str2[i]) {
				printf("%s %s", str1, str2);
				return 0;	
			}
			else ;
	}
	

	return 0;
}
