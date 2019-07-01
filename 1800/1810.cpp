#include <stdio.h>
#include <stdlib.h>
 
int main() 
{
    int a,b;
    char *str=(char*)malloc(100);
    scanf("%s",str);
    scanf("%d %d",&a,&b);
    for(int i=a-1;i<b;i++)
        printf("%c",*(str+i));
    return 0;
}
