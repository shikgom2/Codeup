#include <stdio.h>
#include <string.h>

int n, len, cnt, oldlen;
char name[111], old[111];

int main()
{
	scanf("%d\n%s", &n, name);
	len = strlen(name);

	for(int k = 0; k < n; k++)
	{
		scanf("%s", old);
		oldlen = strlen(old);
		for(int start = 0; start < oldlen; start++)
			for(int step = 1; start + (len-1) * step < oldlen; step++)
			{
				for(int i = 0; i < len; i++)
					if(old[start + i*step] != name[i])
						goto fail;
				cnt++;
				goto naxtk;
				fail:;
			}
	  naxtk:;
	}
	printf("%d", cnt);
	return 0;
}
