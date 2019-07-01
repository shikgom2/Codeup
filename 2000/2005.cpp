#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int n, m, a[150], i, j;

	scanf("%d", &n);
	for(i = 0; i < n; i++) 
		scanf("%d", &a[i]);

	scanf("%d", &m);
	for(i = 0; i < n; i++) 
		a[i] %= m;
	
	sort(a, a + n);
    
	for(i = 1; i < n; i++)
		if(a[i-1] == a[i])
		{
			printf("no");
			return 0;
		}
	printf("yes");
	return 0;
}
