#include <stdio.h>
  
void f(int k, int t)
{
    if(k == 1)
    {
        printf("*");
        return ;
    }
      
    if(t == 1)
    {
        f(k-1, k-1);
        printf("\n");
    }
    else
        f(k, t-1);
      
    printf("*");
    return ;
}
  
int main ()
{
    int n;
      
    scanf("%d", &n);
    f(n, n);
    return 0;
}
