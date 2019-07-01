#include <stdio.h>
#define DATA 3
int main()
{
    int num[3]={};
    int i, j , temp;

    scanf("%d %d %d",&num[0],&num[1],&num[2]);


    for(i=0;i<DATA-1;i++)//비교횟수는 데이터갯수-1, 자기 자신과는 비교 하지 않음
    {
        for(j=0;j<DATA-1;j++)
        {
            if(num[j] > num[j+1])
            {
                temp=num[j];//뒷자리의 수가 더 크면 교체
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
        printf("%d %d %d",num[0],num[1],num[2]);

    return 0;
}

