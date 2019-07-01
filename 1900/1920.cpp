#include <stdio.h>
 
void tobin( int k )
{
    if( k / 2 )
        tobin(k / 2);
    printf("%d", k % 2);       
}
 
int main()
{
    int n;
    scanf( "%d", &n );
    tobin(n);  
    return 0;
}
