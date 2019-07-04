#include <stdio.h>
	int main()
	{
	    int i,sum=0,n;

	    scanf("%d",&n);
	    for(i=1;i<=n;i++)
	    {
	        if(n%i==0)
	            sum+=i;
	    }
        printf("%d",sum);
        return 0;
	}

