#include <stdio.h>
long long int sum = 0;
long long int f(long long int k)
{
    if(k==0)
	{
		if(sum < 0)
		{
			return sum*-1;
		}
		else
	 		return sum;	
	 }
	 
	 long long int hap = k%10;
    sum+=hap;
    f(k/10);
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    printf("%lld",f(n));
}
