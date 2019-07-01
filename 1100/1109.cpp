#include<stdio.h>

int main()
{
	char name[20];
	int age;
	char c;
	double key;

	scanf("%s\n", name);
	scanf("%d\n", &age);
	scanf("%c\n", &c);
	scanf("%lf", &key);

	printf("%s\n%d\n%c\n%g\n", name, age, c, key);
	return 0;
}
