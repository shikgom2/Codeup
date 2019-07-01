#include <stdio.h>

int main()
{
    char a;
    while(1)
    {
        scanf("%c ", &a);
        if(a != 'q') printf("%c\n",a);
        else {
            printf("q");
            return 0;
        }
    }
}
