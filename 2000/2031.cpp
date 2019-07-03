#include <stdio.h>
#include <string.h>
int main()
{
    char a[8];
    int i,j,num=0,o[10]={0},len,k=1;
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++){
        o[i]=a[i]-64;
    }
    for(i=len-1;i>=0;i--){
        num+=o[i]*k;
        k*=26;
    }
    printf("%d",num);
}
