#include<stdio.h>

int main() 
{
    int n, i, j, v;
    scanf("%d", &n);
    
    v = n*(n+1)/2;
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++)
            printf("%d ", v--);
        printf("\n");
    }
    
    return 0;
}


