#include <stdio.h>

int n;
void f(int x)
{
    int i = x;
    int j;
    
  for(j=0;j<i;j++)
    printf("*");
    
    return;
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
