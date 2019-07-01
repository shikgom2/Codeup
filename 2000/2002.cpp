#include<stdio.h>

int main() 
{
	int n, p, k, s;
	char c;

	scanf("%d\n", &k);
	for(p = 1; scanf("%c", &c) != EOF; p++ )
	{
		s = 3 * p + k;
		printf("%c", 'A' + (26*26 + c - 'A' - s) % 26);
	}
	return 0;
}
