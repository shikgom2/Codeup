#include<stdio.h>
	int main()
	{
		int i;
		int j;
		int div=0;
		scanf("%d %d",&i,&j);
		
		div=i/j;
		
		for(i=1;i<=div;i++){
			if(div>=10000){
				printf("번호 초과 오류");
					return 0;
				}
			if(i<10)
				printf("F-000%d\n",i);
			else if(i<100)
				printf("F-00%d\n",i);
			else if(i<1000)
				printf("F-0%d\n",i);
			else if(i<10000)
				printf("F-%d\n",i);
			
		}
		return 0;
	}
