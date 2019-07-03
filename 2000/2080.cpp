#include <stdio.h>

int endday[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int isLeap(int y)	//y년이 윤년인지?
{
	return (y %4 == 0 && y % 100 != 0 || y % 400 == 0) ? 1 : 0;
}

int isEnd(int y, int m)	//y년 m월의 마지막 날은 몇일?
{
	if(m == 2)
		return isLeap(y) + 28;
	else
		return endday[m];
}

int main()
{
	int year, month, day;
	int dyear, dmonth, dday;
	int d_day = 0;	// 실제 남은 날
	int idate, ddate;
	int i, j, k;

	scanf("%d %d %d", &year, &month, &day);
	scanf("%d %d %d", &dyear, &dmonth, &dday);

	idate = year*10000 + month*100 + day;
	ddate = dyear*10000 + dmonth*100 + dday;

	if(idate == ddate)			// D-day랑 같을 때
	{
		printf("D-day");
		return 0;
	}
	else if(idate > ddate)		// D-day보다 클 때
	{
		dyear ^= year ^= dyear ^= year;
		dmonth ^= month ^= dmonth ^= month;
		dday ^= day ^= dday ^= day;
		printf("D+");
	}
	else
		printf("D-");	
	
	if(year < dyear)
	{
		d_day = isEnd(year, month) - day + 1;
		for(j = month + 1; j <= 12; j++)
			d_day = d_day + isEnd(year, j);
		for(i = year + 1; i < dyear; i++)
			d_day = d_day + 365 + isLeap(i);
		for(j = 1; j < dmonth ; j++)
			d_day = d_day + isEnd(dyear, j);
		d_day = d_day + dday - 1;
	}
	else if(year == dyear && month < dmonth)
	{
		d_day = isEnd(year, month) - day + 1;
		for(j = month + 1; j < dmonth ; j++)
			d_day = d_day + isEnd(dyear, j);
		d_day = d_day + dday - 1;
	}
	else if(year == dyear && month == dmonth)
		d_day = d_day + dday - day;

	printf("%d", d_day);	
	return 0;
}
