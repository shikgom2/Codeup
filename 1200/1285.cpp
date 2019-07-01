#include <stdio.h>
 
int main()
{
    int n, sum = 0;
    char c;
    
    scanf("%d",&n);

    sum = n;
    while (1)
    {
        scanf("%c",&c);
        if (c == '=') break;
    
        scanf("%d",&n);
        if (c == '+') sum += n;
        else if (c == '-') sum -= n;
        else if (c == '*') sum *= n;
        else if (c == '/') sum /= n;
    }
    printf("%d",sum);
    return 0;
}
