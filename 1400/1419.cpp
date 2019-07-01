#include <stdio.h>
int main()
{
    char str[101], i;
    int cnt=0;
    
    fgets(str,101,stdin);
    for(i=0;str[i]!='\0';i++)
        if(str[i]=='l' && str[i+1]=='o' && str[i+2]=='v' && str[i+3]=='e')
            cnt++;

    printf("%d", cnt);
    return 0;     
}
