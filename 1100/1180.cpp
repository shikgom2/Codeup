#include <stdio.h>
 
int main()
{
    int n, res;
  
    scanf("%d", &n);
    
    res = (n % 10 * 10) + (n / 10);
    res = res * 2;
    res = res % 100;
    printf("%d\n", res);
    
    if (res <= 50)
        printf("GOOD");
    else
        printf("OH MY GOD");
    return 0;
}
