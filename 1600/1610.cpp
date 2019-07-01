#include<stdio.h>

char *mysubstr(char *str, int start, int count)
{
	int i;
	char sub1[1000];

	for(i = start; i < start+count; i++)
		sub1[i] = str[i];
	sub1[i] = '\0';

	return &sub1[start];
}

int main()
{
	char str[100];
	int s, e;
	scanf("%s", str);
	scanf("%d%d", &s, &e);
	printf("%s", mysubstr(str, s, e));
	return 0;
}
