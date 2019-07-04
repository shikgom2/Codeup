#include<stdio.h>
int i=0, n;
void f(int sum,int c){
    if(sum>n){
        return;
    }
    else if(sum==n){
        i++;
        return;
    }

    if(c!=0){
        f(sum+1,c-1);
        f(sum+2,c-1);
    }
    else{
        f(sum+1,0);
        f(sum+2,0);
        f(sum+3,2);
    }

}
int main()
{
    scanf("%d",&n);
    f(0,0);
    printf("%d",i);
}
