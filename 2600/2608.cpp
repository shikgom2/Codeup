#include<stdio.h>

int n;
char ox[] = {'O', 'X'};
char str[9];

void back(int len, int k)
{
	if(len == n - 1)
	{
		str[len] = ox[k];
		printf("%s\n", str);
		return ;
	}
	else 
	{
		str[len] = ox[k];
		back(len + 1, 0);
		back(len + 1, 1);
	}
}
main()
{
	scanf("%d", &n);
	str[n] = '\0';
	back(0, 0);
	back(0, 1);
}
