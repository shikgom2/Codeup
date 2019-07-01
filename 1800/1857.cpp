#include<stdio.h>

#define Capa 26

int combination(int N_num,int R_num);

int main() {
    int N_num, R_num, result;

    scanf("%d %d", &N_num,& R_num);

    if(R_num > N_num)
    {
        printf("0");
        return 0;
    }
    result = combination(N_num,R_num);

    printf("%d", result);

    return 0;
}
int Buf[Capa][Capa]={0,0,};
int combination(int N_num,int R_num){
    if (Buf[N_num][R_num]>0) {
        return Buf[N_num][R_num];
    }

    if ((N_num == R_num)||R_num==0) {
        return 1;
    }

    return Buf[N_num][R_num] =  combination(N_num-1,R_num-1)+combination(N_num-1, R_num);
}

