#include <stdio.h>
#include <string.h>
  
char codeup[][100] = {
    " ****  ***  ***   ***** *   * ****",
    "*     *   * *  *  *     *   * *   *",
    "*     *   * *   * *     *   * *   *",
    "*     *   * *   * ****  *   * ****",
    "*     *   * *   * *     *   * *",
    "*     *   * *  *  *     *   * *",
    " ****  ***  ***   *****  ***  *"
};

int main()
{
    int i, j, k, l, len, w, h;
    scanf("%d %d", &w, &h);
    for(i=0; i<7; i++)
        for(l=0; l<h; l++,puts(""))
            for(j=0, len=strlen(codeup[i]); j < len; j++)
                for(k=0; k < w; k++)
                    printf("%c", codeup[i][j]);
             
    return 0;
}
