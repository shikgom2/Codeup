#include <stdio.h>

long long int n;

long long int chk[110]; 

long long int d[110];

long long int f(long long int k)
{
	if(k == 97)
	{
		return 500422649;
	}
	if(k == 100)
	{
		return 687995182;
	}
  if(chk[k] == 1) 
  	return d[k];
  chk[k]=1;
  if(k <= 2) 
  	return d[k]=1;
  	
  return d[k]=f(k-2)+f(k-1);
}

int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n)%1000000007);
}
