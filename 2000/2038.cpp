#include <stdio.h>
int main()
{
    char d;
    int a=0,b,c,i,j,k,l=0,h,o;
    for(i=0;i<4;i++){
        scanf("%d",&b);
        a+=b;
    }
    scanf("%d %d",&b,&c);
    if(c==1){
         scanf(" %c%d %d",&d,&k,&j);
    }
    scanf("%d %d",&o,&h);
    while(1){
        if(c==1&&l==0){
            if(d=='+'){
                b+=k;
            }
            if(d=='*'){
                b*=k;
            }
        }
        if(l==j&&c==1){
            if(d=='+'){
                b-=k;
            }
            if(d=='*'){
                b/=k;
            }
        }
        h-=b;
        if(h<1){
            break;
        }
        a-=o;
        if(a<1){
            break;
        }
        l++;
    }
    if(h>a){
        puts("0");
    }
    if(a>h){
        puts("1");
    }
}
