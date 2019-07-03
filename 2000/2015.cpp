// povwhm's Solution

#include<stdio.h>

int year[10],date[10],check[10];

int main()
{
    int f,o,r,t,y,e,n,s,i,x;
     
    for(f=1;f<=8;f++)
    {
        check[f]++;
        for(s=f+1;s<=f+1;s++)
        {
            if(check[s]==1) continue;
            check[s]++;
            for(n=0;n<=0;n++)
            {
                if(check[n]==1) continue;
                check[n]++;
                for(y=0;y<=9;y++)
                {
                    if(check[y]==1) continue;
                    check[y]++;
                    for(o=8;o<=9;o++)
                    {
                        if(check[o]==1) continue;
                        check[o]++;
                        for(i=0;i<=9;i++)
                        {
                            if(check[i]==1) continue;
                            check[i]++;
                            for(r=0;r<=9;r++)
                            {
                                if(check[r]==1) continue;
                                check[r]++;
                                for(x=0;x<=9;x++)
                                {
                                    if(check[x]==1) continue;
                                    check[x]++;
                                    for(e=0;e<=9;e++)
                                    {
                                        if(check[e]==1) continue;
                                        check[e]++;
                                        for(t=0;t<=9;t++)
                                        {
                                            if(check[t]==1) continue;
                                            if(f*10000+o*1000+r*100+t*10+y+t*200+e*20+n*2==s*10000+i*1000+x*100+t*10+y)
                                            {   
                                                printf("%d%d%d%d%d+%d%d%d+%d%d%d=%d%d%d%d%d",f,o,r,t,y,t,e,n,t,e,n,s,i,x,t,y);
                                            }
                                        }
                                        check[e]--;
                                    }
                                    check[x]--;
                                }
                                check[r]--;
                            }
                            check[i]--;
                        }
                        check[o]--;
                    }
                    check[y]--;
                }
                check[n]--;
            }
            check[s]--;
        }
        check[f]--;
    }
    return 0;
}
