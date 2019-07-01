#include <stdio.h>

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}

long long int lcd(long long int num1, long long int num2)
{
	long long int gop = num1*num2;
	
	long long int g = gcd(num1,num2);
	return gop /g;
}
int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%lld\n", lcd(a, b));
}
