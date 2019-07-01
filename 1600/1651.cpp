#include <stdio.h>
#include <string.h>
int main()
{
    char icon[105][105];
    int i,j,k,l,w,len,h,n;
    scanf("%d %d %d\n",&w,&h,&n);
    for(i=0;i<n;i++)scanf("%s",icon[i]);
    for(i=0;i<n;i++){
        for(k=0;k<h;k++){
            len=strlen(icon[i]);
            for(j=0;j<len;j++){
                for(l=0;l<w;l++){
                    printf("%c",icon[i][j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
