#include<stdio.h>
long long int p(long long int num1, long long int num2, long long int result)
{
	if(num2 == 0)
	{
		return 1;
	}
    if (num1 == 0)return result;
    result *= num2;
    p(num1 - 1,num2,result);
}
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", p(b, a, 1));
}
