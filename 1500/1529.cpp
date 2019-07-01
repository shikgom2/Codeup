#include <stdio.h>

void f()
{
  for(int i=1; i<=2; i++)
    printf("%c", '*');

  return; 
} 

int main()
{
    f();
    return 0;
}
