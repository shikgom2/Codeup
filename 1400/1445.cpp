#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int a[2001];
    int n, m, i;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n+m ; i++) 
        scanf("%d", &a[i]);

    sort(a+1, a+n+m+1);

    for(i=1; i<=n+m ; i++)
        printf("%d ",a[i]);
    return 0;
}

