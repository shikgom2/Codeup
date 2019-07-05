#include <cstdio>
#include <cmath>
#define a(x) ((x) < 0 ? -(x) : (x))
double l, x[2], y[2], d[2];
int main()
{
  for(int i=0;i<2;i++)
    scanf("%lf %lf %lf",&x[i],&y[i],&d[i]);
    l=sqrt(a(x[0]-x[1])*a(x[0]-x[1])+a(y[0]-y[1])*a(y[0]-y[1]));

if(l<=d[0]+d[1]) 
  puts("overlapped");
else
  puts("not overlapped");
 }
