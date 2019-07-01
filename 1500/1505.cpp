#include<stdio.h>

int main()
{
	int a[50][50], num, le, re, te, be;
	int n, i, j;

	scanf("%d",&n);
	
	re = be = n - 1;
	le = te = 0;

	while (num < n * n)
	{
		for(i = le; num <= n * n && i <= re ; i++)
			a[te][i] = ++num;
		te++;
		for(i = te; num <= n * n && i <= be; i++)
			a[i][re] = ++num;
		re--; 
		for(i = re; num <= n * n && i >= le; i--)
			a[be][i] = ++num;
		be--;
		for(i = be; num <= n * n && i >= te; i--)
			a[i][le] = ++num;
		le++;
	}

	for(i = 0; i < n; i++, puts(""))
		for(j = 0; j < n; j++)
			printf("%d ", a[i][j]);
	return 0;
}
