#include<stdio.h>
int arr[101][101];
int main()
{
	int i,u,j,v,x1,y1,x2,y2,tmp;
	int cnt=0;

	for(i=1;i<=4;i++)
	{
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);	
		if(x1>x2)
		{
			tmp=x1;
			x1=x2;
			x2=tmp;
			tmp=y1;
			y1=y2;
			y2=tmp;
		}
		
		for(u=x1;u<x2;u++)
			for(v=y1;v<y2;v++)
				arr[u][v]=1;

	}

	for(i=1;i<=100;i++)
		for(j=1;j<=100;j++)
			if(arr[i][j]==1) cnt++;
		
	printf("%d",cnt);
	return 0;
} 
