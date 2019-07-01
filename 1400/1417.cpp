#include<stdio.h>
#include<algorithm>
using namespace std;

int a[111];
int main()
{
    int i;
    for (i=0; i<10; i++)
        scanf("%d", &a[i]);

    sort(a, a+10);
 
    printf("%d", a[7]); 
    return 0;
}
