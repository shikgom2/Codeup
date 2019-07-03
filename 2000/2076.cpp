#include <stdio.h>
int main (void)
{
    int bowling[15][3] = {{ 0 }}, bonus[2] = { 0 }, i, j, score = 0;
    for (i=0; i<10; i++){
        for (j=0; j<2; j++){
            scanf ("%d", &bowling[i][j]);
            if (bowling[i][j] > 10){
                printf ("입력 오류!\n");
                return 0;
            }
            else if (j == 0 && bowling[i][j] + bowling[i][j + 1] > 10){
                printf ("입력 오류!\n");
                return 0;
            }
            else if (j == 0 && bowling[i][j] == 10){
                j++;
            }
        }
    }
    if (bowling[9][0] == 10){
        scanf ("%d %d", &bonus[0], &bonus[1]);
    }
    else if (bowling[9][0] + bowling[9][1] == 10){
       scanf ("%d", &bonus[0]);
    }
    for (i=0; i<10; i++){
        if (i == 9){
            score = score + bowling[9][0] + bowling[9][1] + bonus[0] + bonus[1];
        }
        else if (bowling[i][0] == 10){
            if (i == 8 && bowling[i + 1][0] == 10){
                score = score + bowling[i][0] + bowling[i + 1][0] + bonus[0];
            }
            else if (bowling[i + 1][0] == 10 && bowling[i + 2][0] == 10){
                score = score + bowling[i][0] + bowling[i + 1][0] + bowling[i + 2][0];
            }
            else if (bowling[i + 1][0] == 10 && bowling[i + 2][0] != 10){
                score = score + bowling[i][0] + bowling[i + 1][0] + bowling[i + 2][0];
            }
            else {
                score = score + bowling[i][0] + bowling[i + 1][0] + bowling[i + 1][1];
            }
        }
        else if (bowling[i][0] + bowling[i][1] == 10){
            score = score + 10 + bowling[i + 1][0];
        }
        else{
            score = score + bowling[i][0] + bowling[i][1];
        }
    }
    printf ("%d", score);
    return 0;
}

