#include <stdio.h>

int main(){

    long long int i,n,s=0;

    scanf("%lld",&n);

    for(i=1;i*i<n;i++){
        if(n%i==0){
            s+=i;
            s+=n/i;
        }
    }

    if(i*i==n)
        s+=i;

    printf("%lld",s);

    return 0;
}
