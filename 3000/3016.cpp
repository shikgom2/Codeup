#include <stdio.h>
#include <algorithm>
using namespace std;
struct st
{
    char name[10];
    int sc1;
    int sc2;
    int sc3;
    int g2;
    int g3;
} s[101];
int cmp1(st x,st y)
{
    return x.sc1>y.sc1;
}
int cmp2(st x,st y)
{
    return x.sc2>y.sc2;
}
int cmp3(st x,st y)
{
    return x.sc3>y.sc3;
}
int main(void)
{
    int n,y=1,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s %d %d %d",&s[i].name,&s[i].sc1,&s[i].sc2,&s[i].sc3);
    }
    sort(s+1, s+n+1, cmp2);
    for(i=1; i<=n; i++)
    {
        if(s[i].sc2!=s[i-1].sc2)
        {
            y=i;
        }
        s[i].g2=y;
    }
    y=1;
    sort(s+1, s+n+1, cmp3);
    for(i=1; i<=n; i++)
    {
        if(s[i].sc3!=s[i-1].sc3)
        {
            y=i;
        }
        s[i].g3=y;
    }
    sort(s+1, s+n+1, cmp1);
    printf("%s %d %d",s[1].name, s[1].g2, s[1].g3);
}

