#include <stdio.h>
 
int main() 
{
    int time, a, cnt, rest;
 
    scanf("%d %d", &time, &a);
 
    cnt = (90 - time) / 5;
    rest = (90 - time ) % 5;
 
    a = a + cnt;
 
    if (rest != 0)
        a++;
 
    printf("%d", a);
    return 0;
}
