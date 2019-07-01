#include <stdio.h>
 
int main(){
    int m=-100, a, b, i;
    for(i=1; i<=3; i++){
        scanf("%d %d",&a,&b);
        if(a*b>m) 
            m=a*b;
    }
    printf("%d", m);
    return 0;
}
