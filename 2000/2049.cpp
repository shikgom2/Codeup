#include <stdio.h>

#define SIZE 4

int main() {
    int arr1[SIZE][SIZE];
    int arr2[SIZE][SIZE];
    int i,j,k;

    for(i=0; i<SIZE; i++) {
        for(j=0; j<SIZE; j++) {
            scanf("%d",&arr1[i][j]);
            arr2[i][j]=arr1[i][j];
        }
    }

    for(i=0; i<SIZE; i++) {
        for(j=0; j<SIZE; j++) {
            if(arr1[i][j] == 0)
                continue;

            for(k=i+1; k<SIZE; k++) {
                if(arr1[k][j] == 0)
                    continue;

                if(arr1[k][j] != arr1[i][j])
                    break;

                arr2[i][j]*=2;
                arr2[k][j]=0;
                arr1[i][j]=0;
                arr1[k][j]=0;
            }
        }
    }

    for(i=SIZE-1; i>=0; i--) {
        for(j=0; j<SIZE; j++) {
            for(k=i-1; k>=0; k--) {
                if(arr2[k][j] != 0 || arr2[i][j] == 0)
                    break;

                arr2[k][j]=arr2[i][j];
                arr2[i][j]=0;
            }
        }
    }

    for(i=1; i<SIZE; i++) {
        for(j=0; j<SIZE; j++) {
            for(k=i-1; k>=0; k--) {
                if(arr2[k][j] != 0 || arr2[i][j] == 0)
                    break;

                arr2[k][j]=arr2[i][j];
                arr2[i][j]=0;
            }
        }
    }

    for(i=0; i<SIZE; i++) {
        for(j=0; j<SIZE; j++)
            printf("%d ",arr2[i][j]);
        printf("\n");
    }

    return 0;
}

