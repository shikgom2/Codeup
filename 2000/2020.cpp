#include<stdio.h>

int main() 
{
	int sym[255];
	char aroma[50];
	int A, prevA, i, sum = 0;
	char R, prevR = 0;

	sym[prevR] = 1111;
	sym['I'] = 1; sym['V'] = 5; sym['X'] = 10;
	sym['L'] = 50; sym['C'] = 100; sym['D'] = 500; sym['M'] = 1000;

	scanf("%s", aroma);

	for(i = 0; aroma[i] != '\0'; i += 2)
	{
		A = aroma[i] - '0';
		R = aroma[i+1];
		sum += A * sym[R];

		if(sym[prevR] < sym[R])
			sum -= (prevA * sym[prevR]) * 2;

		prevA = A;
		prevR = R;
	}

	printf("%d", sum);
	return 0;
}
