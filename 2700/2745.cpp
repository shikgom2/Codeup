#include<stdio.h>
 
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c); 
    printf("%d",(a-b)/(b-c)+((a-b)%(b-c)==0?1:2)); 
    return 0;
}
