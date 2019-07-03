#include<stdio.h>
 
int visit[4000003];
  
int main()
{
    int a, b, i, j;
     
    scanf("%d %d", &a, &b);
    for(i = 2; i <= b; i++)
        if(visit[i] == 0)
            for(j = i + i; j <= b; j += i)
                visit[j] = 1;
 
    for(i = a; i <= b - 2; i++)
        if(visit[i] == 0 && visit[i + 2] == 0)
            printf("%d %d\n", i, i + 2);
    return 0;
}

