#include <stdio.h>

int n;

int prime(int i){
int  j;
	for (j = 2; j < i; j++){
	if (i % j == 0){
        return false;
    }
}
		if (i == j)
    		return true;

}
int main()
{
  scanf("%d", &n);
  if(prime(n)) printf("prime");
  else printf("composite");
  return 0;
}
