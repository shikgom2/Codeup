#include <stdio.h>
int main()
{
    long long int i;
    scanf("%lld", &i);

    printf("%lld", ((i*i + i + 2) / 2%137));
}

