#include <stdio.h>

long long int gcd(long long int p, long long int q){ if(p==0) return q; return gcd(q%p, p);}

long long int lcd(long long int num1, long long int num2)
{
	long long int gop = num1*num2;
	
	long long int g = gcd(num1,num2);
	return gop /g;
}
int main()
{
  long long int a;
  
  long long int i;
  long long int arr[101] = {};
  
  scanf("%lld", &a);
  
  for(i = 0; i<a;i++)
  {
  	scanf("%lld", &arr[i]);
  }
  
  long long int val = 1;
  long long int tmp;
  for(i = 0; i<a;i++)
  {
  	tmp = lcd(val, arr[i]);
  	val = tmp;
  }
  
  printf("%lld", val);
}

