#include<stdio.h>
#include<string.h>
#include <queue>
using namespace std;

int main()
{
    int n;

    scanf("%d",&n);
    queue<int> q;
    int x;
    char s[8],trash;

    for(int i=0; i<n; i++)
    {
        scanf("%s",s);

        if(strcmp(s,"push(")==0)
        {
            scanf("%d %c",&x,&trash);
            q.push(x);
        }
        if(strcmp(s,"pop()")==0)
        {
            if(q.size() != 0)
                q.pop();
        }
        if(strcmp(s,"empty()")==0)
            printf("%s\n",q.size()==0?"true":"false");
        if(strcmp(s,"front()")==0){
            if(q.empty())
                printf("-1\n");
            else
                printf("%d\n", q.front());
        }
        if(strcmp(s,"back()")==0)
        {
            if(q.empty())
                printf("-1\n");
            else
                printf("%d\n", q.back());

        }
        if(strcmp(s,"size()")==0)
            printf("%d\n",q.size());
    }
}


