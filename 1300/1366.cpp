#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) 
    {
        for (int j=1; j<=n; j++) 
        {
            if(j==1 || i==1 || i==n || j==n || i==j || i==n-j+1 || n/2+1==i || n/2+1==j) 
            	printf("*");
            else 
            	printf(" ");
        }
        printf("\n");
    }
}
