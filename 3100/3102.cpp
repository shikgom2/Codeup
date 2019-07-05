#include<stdio.h>
#include<string.h>
int main()
{
    int a[250]={0,};
    int n,i,x,p=0;
    char s[8],trash;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%s",s);
        if(strcmp(s,"push(")==0)
        {
            scanf("%d %c",&x,&trash);
            a[p++]=x;
        }
        if(strcmp(s,"pop()")==0)
        {
            a[p-1]=0;
            if(p!=0){
                p--;
            }
        }
        if(strcmp(s,"empty()")==0)
            printf("%s\n",p==0?"true":"false");
        if(strcmp(s,"top()")==0)
            printf("%d\n",p==0? -1:a[p-1]);
        if(strcmp(s,"size()")==0)
            printf("%d\n",p);
    }
}

