#include <stdio.h>
 
int maxCount;
 
int f(int k)
{
    if(k == 1) return 1;
    if(k % 2 == 1) return 1 + f(3*k + 1);
    else return 1 + f(k/2);
}
 
int main()
{
    int a, b, i, count, num;
 
    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++)
    {
        count = f(i);
        if (count > maxCount) 
        {
        	num = i;
        	maxCount = count;
        }
    }
    printf("%d %d", num, maxCount);
 
    return 0;
}
 
