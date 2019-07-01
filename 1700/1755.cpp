#include <stdio.h>
#include <string.h>

char a[103], b[10];
int n, i, x;

main()
{
    scanf("%s", a);
    for(i=0; i<strlen(a); i++)
    if(a[i]=='.')break;
    x=i;
    for(i=x+1; i<strlen(a); i++)
    b[i-x-1]=a[i];
    if(strlen(b)==3){
        if(b[0]=='d' && b[1]=='i')
        printf("Paint.Picture");
        else if(b[0]=='d' && b[1]=='o')
        printf("Word.Document.8");
        else if(b[0]=='h' && b[1]=='t')
        printf("htmfile");
        else if(b[0]=='h' && b[1]=='w' && b[2]=='p')
        printf("Hwp.Document.96");
        else if(b[0]=='h' && b[1]=='w' && b[2]=='t')
        printf("Hwp.Document.hwt.96");
        else if(b[0]=='j')
        printf("jpegfile");
        else if(b[0]=='p')
        printf("PowerPoint.Show.8");
    }
    else if(strlen(b)==4)
    {
        if(b[0]=='d')
        printf("Word.Document.12");
        else if(b[3]=='l')
        printf("htmlfile");
        else if(b[2]=='p')
        printf("Hwp.Document.hwpx.96");
        else if(b[3]=='g')
        printf("jpegfile");
        else if(b[3]=='x')
        printf("PowerPoint.Show.12");
    }
    else printf("powerpointxmlfile");
}
