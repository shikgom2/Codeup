#include <stdio.h>
 
int main()
{
    int i;
    char n[21];
    
    scanf("%s",&n); 
    for(i=0; n[i] != '\0'; i++)
    {
        printf("\'%c\'\n", n[i]);
    }
    return 0;
}
