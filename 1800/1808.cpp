#include <stdio.h>

char code[101];

void h()
{
    printf("Hello, world! ");
    return;
}

void q()
{
    int i;
    for(i=0; code[i]; i++)
        printf("%c", code[i]);
    printf(" ");
}

void b()
{
    int i;
    for(i=99;i>2;i--)
    {
        printf("%d bottles of beer on the wall, %d bottles of beer. \nTake one down and pass it around, %d bottles of beer on the wall. \n",i,i,i-1);
    }
    printf("2 bottles of beer on the wall, 2 bottles of beer. \nTake one down and pass it around, 1 bottle of beer on the wall. \n1 bottle of beer on the wall, 1 bottle of beer. \nTake one down and pass it around, no more bottles of beer on the wall. \nNo more bottles of beer on the wall, no more bottles of beer. \nGo to the store and buy some more, 99 bottles of beer on the wall. ");
}

int main()
{
    int i;

    gets(code);
    for(i=0; code[i]; i++)
    {
        if(code[i]=='H') h();
        if(code[i]=='Q') q();
        if(code[i]=='9') b();
    }
    return 0;
}
