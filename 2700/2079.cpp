#include <stdio.h>

int main(){

    int n;
    int i = 1;

    scanf("%d", &n);

    while(1){
        if(i / 2 == n){
            printf("%d", i);
            return;
        }else if((i * 3) + 1 == n){
            printf("%d", i);
            return;
        }
        i++;
    }
}
