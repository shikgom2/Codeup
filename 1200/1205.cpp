#include<stdio.h>

int main()
{
    double a, b, m=-0x7FFFFFFF, i, s=1;
    
    scanf("%lf %lf", &a, &b);
    
    if(m<a+b) m=a+b;
    if(m<a-b) m=a-b;
    if(m<a*b) m=a*b;
    if(m<a/b) m=a/b;
    if(m<b/a) m=b/a;
    for(i=0;i<a;i++)
    	s*=b;
    if(m<s) m=s;

    s=1;
    for(i=0;i<b;i++)
    	s*=a;

    if(m<s) m=s;
    printf("%lf", m);
}
