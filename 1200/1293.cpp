#include <stdio.h>
int main()
{
    int n, i, a;
    int max, min;
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        scanf("%d", &a);
        if(i==1){
            max=a;
            min=a;
        }
        if(a>=max)  max=a;
        if(a<=min)  min=a;
    }
    
    printf("%d %d", max, min);
    return 0;
}

