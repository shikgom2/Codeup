#include <stdio.h>

int main()
{
    int a[1001];
    int n, i, j, g;
    scanf("%d",&n);

    for (i=0; i<n; i++) 
    	scanf("%d ",&a[i]);
    
    for (i=0; i<n; i++)
    {
        for (j=i , g=1 ; g<=n; j++,g++) 
        {
            
            if(j==n) j=0;
            
            printf("%d ",a[j]);
        }
        printf("\n");
    }
}
