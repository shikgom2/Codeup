#include <stdio.h>
 
int main()
{
    FILE *fi = fopen("secret.dic", "r");
    char c;
     
    while( fscanf(fi, "%c", &c) != EOF )
        printf("%c", c);
             
    fclose(fi);
     
    return 0;
}
