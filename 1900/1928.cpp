#include <stdio.h>
 
void f(int k)
{
    printf("%d\n", k);
    if (k == 1) return ;
    
    if (k % 2 == 1) 
    	f(3*k+1);
    else 
    	f(k/2);
}
 
int main()
{
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}
