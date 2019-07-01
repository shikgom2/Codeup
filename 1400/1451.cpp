#include <stdio.h>

int a[10001];
int n, i, j, tmp; 

int main()
{
    scanf("%d", &n);
    for(i=1; i<=n; i++) 
        scanf("%d", &a[i]);
    
    for(i=1; i<=n; i++){
        for(j=n; j>=i; j--)
        {
            if(a[i]>a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    
    for(i=1; i<=n; i++) 
        printf("%d\n", a[i]);
    
    return 0;
}
