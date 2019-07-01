#include <stdio.h>

int main()
{
	double height, weight, standard, bmi;

	scanf("%lf %lf", &height, &weight);

	standard = (height - 100) * 0.9;

	bmi = (weight - standard) * 100 / standard;

	if (bmi <= 10)
		printf("정상");
	else if (bmi <=20)
		printf("과체중");
	else
		printf("비만");
	return 0;
}
