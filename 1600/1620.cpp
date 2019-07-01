#include <stdio.h>

int sum(int n);

int main()
{
    int j, n, t, total=0;
    scanf("%d", &n);
   
    t = sum(n);
   
    while(t >= 10 ){
        t = sum(t);
    }
   
    printf("%d", t);
   
    return 0;
}

int sum(int n)
{
    if(n/10 == 0){
        return n;
    }
    else return sum(n/10) + sum(n%10);
}
