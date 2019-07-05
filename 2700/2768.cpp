#include<stdio.h>

int main()
{
    int tmp = 0;
    int count, num;
    scanf("%d %d", &count, &num);

    int c = count;


    unsigned long long int arr[num];
    for(int i= 0; i<count; i++)
    {
        scanf("%llu", &arr[i]);
    }
    for(int i=count;i<num;i++)
    {
        arr[i]=0;
    }
    for(int i=count; i<num;i++)
    {
        for(int j=tmp;j<tmp+c;j++)
        {
            arr[i]+=arr[j]%100007;
        }
        tmp++;
    }
    printf("%llu\n", arr[num-1]%100007);
    return 0;
}
