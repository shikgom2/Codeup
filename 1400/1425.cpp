#include <stdio.h>

int main()
{
    int a[100];
    int i, j, t, n, k;
    
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++) 
    	scanf("%d",&a[i]);
    
    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if(a[i]>a[j])
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
    
    for(i = 1; i <= n; i++) {
        printf("%d ", a[i-1]);
        if(i%k==0) printf("\n");
    }
}
