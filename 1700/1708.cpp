#include<stdio.h>

int main()
{
	int n, a[1111], rank[1111]={0}, i, j;

	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for(i = 0; i < n ; i++)
		for(rank[i] = 1, j = 0; j < n ; j++)
			if(a[i] < a[j])
				rank[i]++;

	for(i=0 ;i<n; i++)
		printf("%d %d\n", a[i], rank[i]);
	return 0;
}
