#include<stdio.h>
 
int num,ques;
int data[1000005];
int accumData[1000005];
int prob[100005][3];
 
void input()
{
    int i;
    scanf("%d %d",&num,&ques);
    for(i=1 ; i<=num ; i++){
        scanf("%d",&data[i]);
        accumData[i]=data[i]+accumData[i-1];
    }
    for(i=1 ; i<=ques ; i++){
        scanf("%d %d",&prob[i][1],&prob[i][2]);
    }
}
 
void output()
{
    int i;
    for(i=1 ; i<=ques ; i++){
        printf("%d\n",accumData[prob[i][2]]-accumData[prob[i][1]-1]);
    }
}
 
int main()
{
    input();
    output();
}
