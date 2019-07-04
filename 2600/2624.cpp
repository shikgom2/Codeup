#include <stdio.h>

int prime( int a );

int main( )
{
    int input;
    int i;
    int sum;

        sum = 0;

        //입
        scanf( "%d", &input );
        if( input==0 )      return 0;

        //입력한 수까지 반복하고, 소수가 리턴되면서 누적
        for( i=2 ; i<=input ; i++ )
        {
            sum+=prime( i );
        }

        printf("%d",sum );
    return 0;
}
//소수를 구하는 함수
int prime( int a )
{
    int j;

    for(j=2 ; j<=a ; j++)
    {
        if(a%j == 0)
        {
            if(a == j) return a;
            if(a != j) return 0;
        }
    }
}

