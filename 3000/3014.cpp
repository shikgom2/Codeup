#include <stdio.h>

int main()
{
    int i;
    int arr[100001] = {0,};
    scanf("%d", &i);
    int tmp;
    int max = 0;


    for(int j = 0; j<i;j++)
    {
        scanf("%d",&tmp);
        arr[tmp]++;

        if(max < tmp)
            max = tmp;
    }

    int val;
    for(int j = 0; j<=max;j++)
    {
        val = arr[j];

        while(val != 0){
            printf("%d ", j);
            val --;
        }
    }
}


