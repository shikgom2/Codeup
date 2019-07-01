#include <stdio.h>
 
int main(){
    int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);
    
    for(i=a; i>=1; i--){
        if(a%i==0 && b%i==0 && c%i==0){
            printf("%d", i);
            break;
        }
    }
    return 0;
}
