#include <stdio.h>

int k = 0;

void f(int i){
    if(i == 0)
    {
        printf("0");
        return;
    }
    if(i % 10 == 0 && k == 0)
    {
        i/=10;
    }
    else{
        k = 1;
        printf("%d",i%10);
        i/=10;
    }
    if(i == 0)
        return;
    else
        f(i);
}
int main()
{
    int i;
    scanf("%d", &i);
    f(i);
}
