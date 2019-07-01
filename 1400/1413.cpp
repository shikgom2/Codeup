#include <stdio.h>
#include <string.h>

int main()
{
    char a[110];
    fgets(a,100,stdin);

    for(int i=strlen(a)-1; i>=0; i--){
        printf("%c", a[i]);
    }
    return 0;
}
