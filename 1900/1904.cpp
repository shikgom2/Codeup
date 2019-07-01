#include <stdio.h>
     int holsu(int a,int b){
	if(a>b)
		return 0;
	else
		if(a%2==0)
			holsu(a+1,b);
		else if(a%2==1)
		{
			printf("%d ",a);
			holsu(a+1,b);
		}
} 
int main()
{
	int i,j;
	scanf("%d %d",&i,&j);
	holsu(i,j);
}

