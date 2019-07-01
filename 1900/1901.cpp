#include <stdio.h>

void f(int k)
{
	if (k == 0)
	{
		return ;
	}
	else
	{
		f(k-1);
		printf("%d\n", k);	
	}

}
int main()
{
	int n;
	scanf("%d", &n);
	f(n);
}

