#include <stdio.h>

int n;

int f(int i){
int  j;
	for (j = 2; j < i; j++){
	if (i % j == 0){
               printf("composite");
	return 0;
    }
}
		if (i == j)
		printf("prime");

}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
