#include<stdio.h>

int main()
{
	int dday = 0, i, month, day;

	scanf("%d %d", &month, &day);

	if(month != 10)
	{
		if(month % 2 == 0)
			dday = 30 - day + 1;
		else
			dday = 31 - day + 1;

		for(i = month + 1; i < 10; i++)
		{
			if(i % 2 == 0)
				dday = dday + 30;
			else
				dday = dday + 31;
		}
		dday = dday + 29;
	}
	else
		dday = 30 - day;

	printf("%d", dday);
	return 0;
}
