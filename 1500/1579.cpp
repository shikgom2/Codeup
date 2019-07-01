#include <stdio.h>

int mymin(int a, int b) {
  return a<b?a:b;
}
main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymin(a, b));
}
