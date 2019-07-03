#include <stdio.h>
 
int main(void)
{
    int a, b;
    int i, j;
    int cnt=0;
     
    scanf("%d %d",&a,&b);
     
    for(i=-100 ; i<=100 ; i++)
    {
        for(j=-100 ; j<=100 ; j++)
        {
            if(i+j==a)
            {
                if(i*j==b)
                {
                    cnt=1;
                    if(i>=0 && j>=0)
                    {
                        if(i==j)
                        {
                           printf("x+%d\n",i);
                           return 0;
                        }
                        else
                        {
                           printf("x+%d\n",i);
                           printf("x+%d\n",j);
                           return 0;    
                        } 
                    }
                    else if(i>=0 && j<0)
                    {
                        printf("x+%d\n",i);
                        printf("x%d\n",j);
                        return 0;
                    }
                    else if(i<0 && j>=0)
                    {
                        printf("x%d\n",i);
                        printf("x+%d\n",j);
                        return 0;
                    }
                    else if(i<0 && j<0)
                    {
                        if(i==j)
                        {
                            printf("x%d\n",i);
                            return 0;
                        }
                        else
                        {
                            printf("x%d\n",i);
                            printf("x%d\n",j);
                            return 0;
                        }
                    }
                }
            }
        }
    }
    if(cnt==0)
    {
        printf("-1");
    }
    return 0;
}
