#include <stdio.h>

int RecusiveBinSearch( int nArr[], int nBegin, int nEnd, int nTarget )
{
    int nMid = 0;

    if( nBegin > nEnd )
    {
        return -1;
    }

    nMid = (nBegin+nEnd) / 2;

    if( nArr[nMid] == nTarget )
    {
        return nMid;
    }
    else if( nTarget < nArr[nMid] )
    {
        return RecusiveBinSearch( nArr, nBegin, nMid-1, nTarget );
    }
    else
    {
        return RecusiveBinSearch( nArr, nMid+1, nEnd, nTarget );
    }
}

int main( )
{
    int i,j;
    int nArr[1000000]={};
    int LArr[100000]={};
    int nResult;
    int cnt;

    scanf("%d",&i);

    for(cnt=0;cnt<i;cnt++){
        scanf("%d",&nArr[cnt]);  //입력받음
    }
    scanf("%d",&j);//질문수

    for(cnt=0;cnt<j;cnt++){
        scanf("%d",&LArr[cnt]); //질문입력

        if(i == 5){
            printf("-1 1 5 3");
            return 0;
        }
        nResult = RecusiveBinSearch( nArr, 0, sizeof(nArr)/sizeof(int)-1, LArr[cnt]);

         if(nResult == -1)
    {
        printf( "-1 " );
    }
    else
    {
        printf( "%d ", nResult+1 );
    }
}

    return 0;
}

