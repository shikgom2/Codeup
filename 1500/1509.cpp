#include <stdio.h>

int main()
{
    int a[12][12], i, j, res ;

    for(i = 1; i <= 11; i++)
        for(j = 1; j <= 10; j++)
            scanf("%d",&a[i][j]);

    for(j = 1; j <= 10; j++)
	{
        if(a[11][j] == 0) continue;
        res = 0;
        for(i = 10; i >= 1; i--)
		{
            if(a[i][j] != 0)
			{
                res = a[i][j];
                break;
            }
        }

        if(res == 0) printf("%d safe\n", j);
        else if(res > 0) printf("%d crash\n", j);
        else printf("%d fall\n", j);
    }
}
