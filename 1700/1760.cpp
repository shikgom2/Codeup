#include <stdio.h>

int main()
{
    int i, j;
    char s[11], a[15];

    scanf("%s ",s);
    gets(a);
    
    for(i = 0; i < 15; i++)
    {
        for(j = 0; j < 10; j++)
            if (s[j] == a[i]) a[i]='0'+j;
    }
    
    printf("%s",a);
    return 0;
}
