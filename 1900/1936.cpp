#include <stdio.h>
int f(int a, int b){
    if(a==b) return 0;
    if(b>a) return f(a,b/2)+1;
    if(a>b) return f(a/2,b)+1;
}

int main()
{
 int a, b;
 scanf("%d %d", &a, &b);
 printf("%d", f(a,b));
 }
