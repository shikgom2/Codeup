#include <stdio.h>

int main()
{

	int a[10] , sum = 0, mincount = 0, maxcount = 0;
	float avg;

	for(int i = 0 ; i < 10 ; i++){
		scanf("%d", &a[i]);
		sum += a[i];
	}
	avg = (float)sum/10;

	for(int i = 0 ; i < 10 ; i ++){
		if(avg <= a[i]){
			maxcount++;
		}
		if(avg > a[i]){
			mincount++;
		}
	}
	printf("%.1f\n%d %d", avg, maxcount, mincount);

	return 0;
}
