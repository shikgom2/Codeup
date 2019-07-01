#include <stdio.h>

int n, m;
int max(int p, int q)
{
  return p>=q?p:q;
 }
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", max(n, m));
}
