#include <stdio.h>  

int main()  
{
	int a[100], i, n, as = 0, des = 0;

	scanf("%d\n%d", &n, &a[0]);
	for(i = 1; i < n; i++)
	{
		scanf("%d", &a[i]);
		if(a[i-1] < a[i]) as = 1;
		if(a[i-1] > a[i]) des = 1;
	}

	if(as==des) printf("섞임");
	else if(as==1) printf("오름차순");
	else printf("내림차순");
	return 0;
}
