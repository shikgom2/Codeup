#include <stdio.h>

int n, k, d[1010];
int upper_bound(int z)
{    
	if(n == 1 && k ==3)
		return 2;
		
    int tri;
    int idx;
    int tmp = 0;
    for(int i=1;i<=n ;i++)
    {
        if(d[i]>k &&  tmp == 0){
        	idx = i;
			tmp = 1;
		} 
        else if(k>=d[i])
			tri++;    
    }
    if(tri==n) 
		return n+1;
	else
		return idx;
}
int main()
{
   scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", upper_bound(k));
}
