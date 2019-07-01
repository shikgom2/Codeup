#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
	return strcmp(a, b);
}

int main()
{
	int n;
	scanf("%d", &n);
	char arr[n][11];

	for (int i = 0; i < n; i++)
	{
		scanf("%s", arr[i]);
	}
	
	qsort((void *) arr, n, sizeof(arr[0]), compare);
	
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", arr[i]);
	}
}
