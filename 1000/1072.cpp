#include <stdio.h>
 
int main() 
{     
    int cnt;
    int n;
     
    scanf("%d", &cnt);
     
    again:
    if(cnt-- != 0) 
    {
        scanf("%d", &n);
        printf("%d\n", n); 
        goto again;
    }
     
    return 0;
}
