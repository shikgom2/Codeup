#include<stdio.h>
#include<math.h>

int n;
double a[105],b[105],len;

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++) 
        scanf("%lf%lf",&a[i],&b[i]);
    for(int i=1;i<n;i++) 
        len+=sqrt((a[i]-a[i-1])*(a[i]-a[i-1])+(b[i]-b[i-1])*(b[i]-b[i-1]));
    printf("%.2lf",len);
    return 0;
}
