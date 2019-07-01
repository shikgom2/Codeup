#include <stdio.h>
 
void f(int a, int b)
{
    if(a==1) {
        printf("*");
        return;
    }
    printf("*");
    if(b==1){
        printf("\n");
        f(a-1, a-1);
    }
    else
        f(a, b-1);
    return;
}
int main ()
{
    int n;
    scanf("%d", &n);
    f(n, n);
    return 0;
}
