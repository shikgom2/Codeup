#include <stdio.h>

int tnum, cnt, i, j, k;

int main()
{
	scanf("%d", &k);

	for(i = 1; cnt <= k ; i++)
	{
		cnt = 0;
		tnum += i;
		for(j = 1; j * j <= tnum; j++)
		{
			if(tnum % j == 0)
				if(tnum != j * j) cnt+=2;
				else cnt++;
		}
	}

	printf("%d", tnum);
	return 0;
}
