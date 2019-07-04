n,k=map(int, input().split())
a=[int(i) for i in input().split()]

if a[n-1]<k :
    print(n+1)
else :
    s,e=0,n-1
    while s<e :
        m=(s+e)//2
        if a[m]<k :
            s=m+1
        else :
            e=m
    print(e+1)

