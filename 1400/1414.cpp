#include <stdio.h>

int main()
{
    char s[101];
    int i, cnt1=0, cnt2=0;
    scanf("%s", &s);
    
    for(i=0; s[i]!='\0'; i++){
        if(s[i]=='c'||s[i]=='C'){
            cnt1++;
            if(s[i+1]=='c'||s[i+1]=='C') 
                cnt2++;
        }
    }
    
    printf("%d\n%d", cnt1, cnt2);
    return 0;
}
