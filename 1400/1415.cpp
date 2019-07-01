#include <stdio.h>

int main() 
{
    int even=0, odd=0, n, i;

    for(i=1; i<=10; i++) {
        scanf("%d", &n);
        if( n%2==0 ){
            if( even<n )
                even=n;
        }
        else {
            if( odd<n )
                odd=n;
        }
    }
    
    if(odd) printf("%d ", odd);
    if(even) printf("%d", even);
    return 0;
}

