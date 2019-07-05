#include <algorithm>
int n,m,k;
int main() {
	scanf("%d%d%d",&n,&m,&k);
	printf("%d",std::min({n/2,m,(n+m-k)/3}));
}
