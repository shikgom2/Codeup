#include <stdio.h>

int main()
{
    float a,sa,b,y;
	int x;
    scanf("%f %f",&a,&b);

    sa=a;
    for(x=0;x<b;x++)
    {
                    scanf("%f",&y);
                    a*=(100+y)/100;
    }

    if(a-sa>=0.5||a-sa<=-0.5)
    {
                      printf("%.0f\n",a-sa);
                      if(a-sa>0)
                               printf("good");
                      else
                          printf("bad");
    }
    else
    {
        printf("0\n"); 
        printf("same");
    }            
    return 0;
}
