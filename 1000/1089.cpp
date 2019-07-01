#include <stdio.h>
int main(){
    int i, j, a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    for(i=a, j=1; ;j++, i+=b)
        if(j==c) break;
    printf("%d", i);
    return 0;
}
