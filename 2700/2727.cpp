#include <stdio.h>
int main (void)
{
    long long int i, n, sum;
    scanf ("%d", &n);
    long long int first[n + 1], end[n + 1];
    for (i=0; i<n; i++){
        scanf ("%lld %lld", &first[i], &end[i]);
    }
    for (i=0; i<n; i++){
		sum = ((first[i] + end[i]) * (end[i] - first[i] + 1)) / 2;
		printf("Scenario #%lld:\n%lld\n\n", i + 1, sum);
    }
    return 0;
}


