#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,len;
    char q[100000];
    scanf("%s", q);
    len=strlen(q);
    for(i=len-1;i>=0;i--){
        printf("%c", q[i]);
    }
}
