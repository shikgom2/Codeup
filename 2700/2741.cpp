#include <stdio.h>
#include <string.h>

int main()
{
    char i[26];
    scanf("%s", i);
    int idx[26];

    char real[101];
    scanf("%s", real);

    int cnt;
    int cnt2;
    for(cnt = 0 ; cnt<strlen(real); cnt++)
    {
        for(cnt2 = 0; cnt2<strlen(i); cnt2++)
        {
            if(i[cnt2] == real[cnt])
            {
                printf("%c",97+cnt2);
            }
        }
    }
}

