#include <stdio.h>

int main()
{
    int i,j;
    scanf("%d %d",&i,&j);
    int max,min,mid;
    int a,b,c;

    a = i+j;
    b = i-j;
    c = i*j;
	
  if (a > b)
  {

    max = a, min = b;
    min = (b < c) ? b : c;
    max = (a>c) ? a : c;

  if ((max == a) && (min == b))
    mid = c;

  else if (max != a)
    mid = a;
  
  else
    mid = b;

  }

  else if (a < b)
  {

    max = b, min = a;
    min = (i < c) ? a : c;
    max = (b>c) ? b : c;

  if ((max == b) && (min == a))
   mid = c;
  
  else if (max != b)
    mid = b;

  else
    mid = a;

  }

  printf("%d", mid);
}
