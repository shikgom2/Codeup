
#include <stdio.h>

void main()
{
	int input1,input2,temp;
	int gcd=1,lcm; // gcd : 최대공약수, lcm : 최소공배수
	scanf("%d %d",&input1,&input2);
	lcm = input1*input2;
	if(input1>input2)
	{
		temp = input1;
		input1 = input2;
		input2 = temp;
	}

	while(gcd!=0)
	{
		gcd = input1%input2;
		input1=input2;
		input2=gcd;
	}
	lcm = lcm/input1;
	printf("%d",input1);


}

