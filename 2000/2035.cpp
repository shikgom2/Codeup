#include <stdio.h>

int main()
{
	int n, a[10011], i, cnt = 0;
	
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	a[0] = 0;
	a[n+1] = 0;
	
	for(i = 1; i <= n; i++)
		if ( !a[i-1] && !a[i] && !a[i+1] )
			cnt++;
	
	printf("%d", cnt);
	return 0;
}
