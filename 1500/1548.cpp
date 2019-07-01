#include <stdio.h>

int n;
char grade(int k)
{
  if(k >= 90) return 'A';
  else if(k>= 80) return 'B';
  else if(k>= 70) return 'C';
  else if(k>= 60) return 'D';
  else return 'F';
}

/**/
int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}
