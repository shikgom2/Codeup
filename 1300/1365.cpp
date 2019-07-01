#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++) 
    	printf("*");
    printf("\n");
    
    for(i=1;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0 || j==i || j==n-1 || j==n-i-1)
            	printf("*");
            else 
            	printf(" ");
        }
        printf("\n");
    }
    for(i=0; i<n; i++)
    	printf("*");
    return 0;
}
