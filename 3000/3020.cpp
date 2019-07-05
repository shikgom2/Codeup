#include<stdio.h>
#include<algorithm>

struct numb{
    int a;
    int th;
};

numb p[1000002];

int n,m,ques[100002];

bool compare(numb onek,numb twok){
    return onek.a<twok.a;
}

int binary(numb list[],int key)
{
    int low,high,middle;
    low=1;
    high=n;

    while(low<=high)
    {
        middle=(low+high)/2;
        if(key==list[middle].a)
            return list[middle].th;
        else if(key>list[middle].a)
            low=middle+1;
        else
            high=middle-1;
    }
    return -1;
}

int main()
{
    int i;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++){
        p[i].th=i;
        scanf("%d",&p[i].a);
    }
    scanf("%d",&m);
    for(i=1 ; i<=m ; i++){
        scanf("%d",&ques[i]);
    }
    std::sort(p+1,p+n+1,compare);
    for(i=1 ; i<=m ; i++){
        printf("%d ",binary(p,ques[i])); 
    }
}
