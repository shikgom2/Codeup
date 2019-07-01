#include <stdio.h>

int n;

int f(int j){
	int cnt = 0;
	for(int i = 1; i <= j; i++) {
    if (j % i == 0) {
        cnt++; // 약수 개수
    	}
	}
	return cnt;
}
int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}
