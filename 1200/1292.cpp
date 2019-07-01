#include <stdio.h>
int main ()
{
    int a, i=1, d=0;
    for(i=1; i<=10; i++){
        scanf("%1d", &a);
        d = d + a;
    }
    if(d%7==4) printf("suspect");
    else printf("citizen");
    return 0;
}
