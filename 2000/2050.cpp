#include <stdio.h>
#define SIZE 4
char d;
void drawBoard(int arr[][SIZE]){
    int i, j;

    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}
void Test(int arr[][SIZE]){
    int i, j, cnt=0;
    int temp[SIZE][SIZE]={0};

    Re:
    for(i=0;i<SIZE;i++)
        for(j=0;j<SIZE;j++)
            temp[i][j]=arr[i][j];

    order(arr);

    for(i=0;i<SIZE;i++)
        for(j=0;j<SIZE;j++)
            if(temp[i][j]==arr[i][j])
                cnt++;

    if(cnt>=16);
    else
        goto Re;
}
void d_U(int arr[][SIZE]){
    int i, j;
    for(j=0;j<SIZE;j++){
        for(i=0;i<SIZE-1;i++){
            if(arr[i][j]==arr[i+1][j]){
                arr[i][j]+=arr[i+1][j];
                arr[i+1][j]=0;
            }
        }
    }
}
void d_D(int arr[][SIZE]){
    int i, j;
    for(j=SIZE-1;j>=0;j--){
        for(i=SIZE-1;i>0;i--){
            if(arr[i][j]==arr[i-1][j]){
                arr[i][j]+=arr[i-1][j];
                arr[i-1][j]=0;
            }
        }
    }
}
void d_R(int arr[][SIZE]){
    int i, j;
    for(i=SIZE-1;i>=0;i--){
        for(j=SIZE-1;j>0;j--){
            if(arr[i][j]==arr[i][j-1]){
                arr[i][j]+=arr[i][j-1];
                arr[i][j-1]=0;
            }
        }
    }
}
void d_L(int arr[][SIZE]){
    int i, j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE-1;j++){
            if(arr[i][j]==arr[i][j+1]){
                arr[i][j]+=arr[i][j+1];
                arr[i][j+1]=0;
            }
        }
    }
}
void blank_U(int arr[][SIZE]){
    int i, j, k;
    for(k=0;k<SIZE;k++)
        for(i=0;i<SIZE;i++){
            if(arr[i][k]==0){
                for(j=i;j<SIZE;j++)
                    if(arr[j][k]!=0){
                        arr[i][k]=arr[j][k];
                        arr[j][k]=0;
                        break;
                    }
            }
        }
}
void blank_D(int arr[][SIZE]){
    int i, j, k;
    for(k=SIZE-1;k>=0;k--)
        for(i=SIZE-1;i>=0;i--){
            if(arr[i][k]==0){
                for(j=i;j>=0;j--)
                    if(arr[j][k]!=0){
                        arr[i][k]=arr[j][k];
                        arr[j][k]=0;
                        break;
                    }
            }
        }
}
void blank_R(int arr[][SIZE]){
    int i, j, k;
    for(k=SIZE-1;k>=0;k--)
        for(i=SIZE-1;i>=0;i--){
            if(arr[k][i]==0){
                for(j=i;j>=0;j--)
                    if(arr[k][j]!=0){
                        arr[k][i]=arr[k][j];
                        arr[k][j]=0;
                        break;
                    }
            }
        }
}
void blank_L(int arr[][SIZE]){
    int i, j, k;
    for(k=0;k<SIZE;k++)
        for(i=0;i<SIZE;i++){
            if(arr[k][i]==0){
                for(j=i;j<SIZE;j++)
                    if(arr[k][j]!=0){
                        arr[k][i]=arr[k][j];
                        arr[k][j]=0;
                        break;
                    }
            }
        }
}
void order(int arr[][SIZE]){
    switch(d){
    case 'U':
        blank_U(arr);
        d_U(arr);
        blank_U(arr);
        break;
    case 'D':
        blank_D(arr);
        d_D(arr);
        blank_D(arr);
        break;
    case 'R':
        blank_R(arr);
        d_R(arr);
        blank_R(arr);
        break;
    case 'L':
        blank_L(arr);
        d_L(arr);
        blank_L(arr);
        break;
    }
}
int main(){
    int arr[SIZE][SIZE]={0};
    int i, j;

    scanf("%c",&d);

    for(i=0;i<SIZE;i++)
        for(j=0;j<SIZE;j++)
            scanf("%d",&arr[i][j]);


    order(arr);
    Test(arr);
    drawBoard(arr);

    return 0;
}

