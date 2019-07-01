#include<stdio.h>
int main(){
    char s[31];
    scanf("%s", &s);
    if(s[0]=='I'&& s[1]=='O' && s[2]=='I' && s[3]=='\0')
        printf("IOI is the International Olympiad in Informatics.");
    else
        printf("I don't care.");
    return 0;
}

