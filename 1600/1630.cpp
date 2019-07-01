#include <stdio.h>
 
char title[101];

int main() 
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) 
    {
        scanf("%s",title);
        printf("%s\n",title);
        if (i<n-1) 
            printf("AMOLED\n");
    }
    return 0;
}
