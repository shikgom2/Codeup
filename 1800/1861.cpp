#include <stdio.h>

void print(int a, int b);
int arr[26][26];
int n;
int main(void)
{
    arr[1][1] = 1;
    scanf("%d", &n);
    printf("%d\n", arr[1][1]);
    print(2,1);
}
void print(int a, int b)
{
    if(a > n)
        return;

    else if(b == 1)
    {
        arr[a][b] = arr[a-1][b];
        printf("%d ",arr[a][b]);
        print(a,b+1);
    }
    else if(a == b)
    {
        arr[a][b] = 1;
        printf("%d\n",arr[a][b]);
        print(a+1,1);
    }
    else{
        arr[a][b] = arr[a-1][b-1] + arr[a-1][b];
        printf("%d ",arr[a][b]);
        print(a,b+1);
    }
}

