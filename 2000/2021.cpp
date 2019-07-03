#include <stdio.h>
#include <algorithm>

struct _data {
	int num;
	int frq;
} sensor[1001];

bool cmp(_data a, _data b){
	return a.frq * 10000 + a.num > b.frq * 10000 + b.num;
}

int main()
{
	int n, a[1001], k, i;
	int m1, m2, m3;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &k);
		sensor[k].num = k;
		sensor[k].frq++;
	}
	
	std::sort(sensor, sensor + 1000, cmp);
	
	m1 = sensor[0].num;
	if(sensor[0].frq == sensor[1].frq)
	{
		m1 = sensor[0].num;
		for( i = 1; sensor[i].frq == sensor[0].frq; i++) ;
		m2 = sensor[i-1].num;
		printf("%d", abs(m1 - m2) );
	}
	else
	{
		m1 = sensor[0].num;
		m2 = sensor[1].num;
		for( i = 2; sensor[i].frq == sensor[1].frq; i++) ;
		m3 = sensor[i-1].num;
		printf("%d", abs(m1-m2) > abs(m1-m3) ? abs(m1-m2) : abs(m1-m3) );		
	}
	return 0;
}
