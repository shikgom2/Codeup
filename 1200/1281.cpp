#include <stdio.h>
 
int main()
{
    int i, a, b, min, max, sum = 0;
 
    scanf("%d %d", &a, &b);
 
    for(i = a; i <= b; i++)
    {
        if(i%2 == 1)
        {
            sum += i;
			if(i == a)
				printf("%d",i);
			else
				printf("+%d",i);
        }
        else
        {
            sum -= i;
            printf("-%d",i);
        }
    }
 
	if (sum>=0)
		printf("=+%d", sum);
	else
		printf("=%d", sum);
    return 0;
}
