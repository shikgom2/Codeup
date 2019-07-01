#include <stdio.h>
int main()
{
    int i, a, s=0;
    scanf("%d", &a);
    for(i=1; ;i++)
    {
        s += i;
        if (s>=a) break;
    }
    printf("%d", i);
    return 0;
}
