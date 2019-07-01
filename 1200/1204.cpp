#include <stdio.h> 
int main() 
{ 
    int a; 
    scanf("%d", &a); 

    if ( a==11 || a==12 || a==13 )
	printf("%dth",a); 
    else if ( a%10 == 1 ) 
        printf("%dst",a); 
    else if ( a%10 == 2 ) 
        printf("%dnd",a); 
    else if ( a%10 == 3 ) 
        printf("%drd",a); 
    else
        printf("%dth",a); 
    return 0;
} 
