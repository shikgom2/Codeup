#include<stdio.h>
void g(int,int);
int main()
{
    int a,k;
    scanf("%d %d",&a,&k);
    g(a,k);
}
void g(int x,int y)
{
    if(x==0)
    {
        return;
    }
    g(x/y,y);
    if(x%y<10)
    printf("%d",x%y);
    else if(x%y>=10)
        printf("%c",x%y+55);
 
}
