#include <stdio.h>

int main()
{
    char str[100];
    
    scanf("%s", str);
    for(int i=0; str[i] != NULL; i++)
        if(str[i]!=',') printf("%c",str[i]);
        else printf(" ");
    return 0;
}
