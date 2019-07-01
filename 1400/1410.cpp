#include <stdio.h>
int main(){
    char s[100001];
    int i, a=0, b=0;
    scanf("%s", &s);
    for(i=0; s[i]!='\0'; i++){
        if(s[i]=='(')
            a++;
        if(s[i]==')')
            b++;
    }
    printf("%d %d", a, b);
    return 0;
}


