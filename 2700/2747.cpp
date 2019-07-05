#include <stdio.h>
#include <string.h>
int main (void)
{
    int n, i, j, check = 0, num = 1;
    scanf ("%d\n", &n);
    char game[n + 1][101];
    int cnt[101] = { 0 };
    for (i=0; i<n; i++){
        gets(game[i]);
    }
    for (i=0; i<n; i++){
        for (j=0; j<i; j++){
            if (strcmp(game[i], game[j]) == 0){
                check = 1;
            }
        }
        for (j=i; j<n; j++){
            if (strcmp(game[i], game[j]) == 0 && check == 0){
                cnt[i]++;
            }
        }
        if (cnt[i] >= 1){
            printf ("%d %s : %d\n", num++, game[i], cnt[i]);
        }
        check = 0;
    }
    return 0;
}
