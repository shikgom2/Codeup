#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    
    gets(a);
    
    for(int i=0; i < strlen(a); i++)
    {
        if(a[i]==',') printf(" ");
        else if(a[i]==' ') ;
        else if(a[i]==';') puts(" ");
        else printf("%c", a[i]);
    }
}
