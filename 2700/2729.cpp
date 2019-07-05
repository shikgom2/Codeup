#import<cstdio>
long k,n,p=1000000007,a[10001],b[10001],c[10001];
main()
{
  scanf("%d",&n);

  for(c[0]=1;k++<n;)
  {
    a[k]=c[k-3];
    b[k]=(a[k-1]+a[k-2])%p;
    c[k]=(b[k-1]+b[k-2]+c[k-1]+c[k-2])%p;
  }

  printf("%d",(a[n]+b[n]+c[n])%p);
}

