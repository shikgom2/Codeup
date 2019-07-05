#include <stdio.h>

int main(){
	int N;
	long long num[1001][1001]={0,};
	long long ret[1001][1001]={0,};
	scanf("%d",&N);

	for(int i = 0 ; i < N ; i++){
		for(int j=0; j <i + 1 ;j++){
			scanf("%lld",&num[i][j]);
		}
	}

	ret[0][0] = num[0][0];
	for(int i = 0 ; i < N-1 ; i++){
		for(int j=0; j <i + 1 ;j++){
			if( ret[i+1][j] < ret[i][j] + num[i+1][j])
				ret[i+1][j] = ret[i][j] + num[i+1][j];
			if( ret[i+1][j+1] < ret[i][j] + num[i+1][j+1])
				ret[i+1][j+1] = ret[i][j] + num[i+1][j+1];
		}
	}

	long long max = 0;
	for(int i = 0 ; i < N ; i++){
		if(ret[N-1][i] > max)
			max = ret[N-1][i] ;
	}
	printf("%lld\n",max);

	return 0;
}
