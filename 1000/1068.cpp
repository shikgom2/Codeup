#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if(a >= 90) printf("A\n");
    else if(a >= 70) printf("B\n");
    else if(a >= 40) printf("C\n");
    else printf("D\n");
   
    return 0;
}
