#include<stdio.h>
#include<string.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[250]={0,};
    int n,i,x,p=0;
    char s[100],trash,trash2;
    scanf("%d",&n);
    int idx = 0;
    int y;
    for(i=0; i<n; i++)
    {
        scanf("%s",s);
        if(strcmp(s,"make_pair(")==0)
        {
            scanf("%d %c %d %c",&x,&trash, &y, &trash2);
        }
        if(strcmp(s,"first")==0)
            printf("%d\n",x);
        if(strcmp(s,"second")==0)
            printf("%d\n",y);
    }
}

