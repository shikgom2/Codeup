#include <cstdio>
using namespace std;

int A, B, C;

int power(int n, int k){
	if(k == 0) return 1;

	int temp = power(n, k/2);
	int result = 1LL * temp * temp % 1000000007;
	if(k%2) result = 1LL * result * n % 1000000007;
	return result;
}

int main(){
	scanf("%d %d", &A, &B);
	printf("%d\n", power(A, B));
}
