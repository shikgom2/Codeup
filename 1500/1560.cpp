#include <stdio.h>

long long int n, m;
long long f(long long i, long long j)
{
	if(i>j)
		return i-j;
	else
		return j-i;
}
int main()
{
  scanf("%lld%lld", &n, &m);
  printf("%lld\n", f(n, m));
}
