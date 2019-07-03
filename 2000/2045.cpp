#include <stdio.h>

int main()
{
	int n, m, a, b, i;
	int chk[101]={0}, Ocnt = 0;
	
	scanf("%d %d", &n, &m);
	for(i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		chk[a]++;
		chk[b]++;
	}
	for(i = 1; i <= n; i++)
		if (chk[i] == 0)
		{
			puts("NO");
			return 0;
		}
		else if (chk[i] % 2 == 1) Ocnt++;

	if (Ocnt == 0 || Ocnt == 2) 
		puts("YES");
	else
		puts("NO");
	return 0;
}
