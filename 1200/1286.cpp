#include <stdio.h>
 
int main()
{
    int max = -1000000;
    int min = 1000000;
    int n, i;
    
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if(n > max) max = n;
        if(n < min) min = n;
    }
 
    printf("%d\n%d", max, min);
    return 0;
}
