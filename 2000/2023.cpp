#include<stdio.h>

char str[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void toCol(int k)
{
	if(k>0)
	{
		k--;
		toCol(k/26);
		printf("%c", str[k%26]);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	toCol(n);
	return 0;
}
