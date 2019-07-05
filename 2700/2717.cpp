#include <stdio.h>

void addFraction(int m1, int n1, int m2, int n2, int *m3, int *n3); 
int GetGCD(int a, int b); 

int main(void)
{
  int a, b, sum_a, sum_b;
  sum_a = 0;

  int cnt;
  scanf("%d", &cnt);

  for(int k = 0; k<cnt; k++){
    scanf("%d %d", &a, &b);

  if (sum_a == 0){
    sum_a = a;
    sum_b = b;
  }
  else
    addFraction(sum_a, sum_b, a, b, &sum_a, &sum_b);
  }

  printf("%d/%d", sum_a, sum_b);
  return 0;
  }
  
void addFraction(int m1, int n1, int m2, int n2, int *m3, int *n3) {
  int GCD;

  *m3 = (m1*n2) + (m2*n1); 
  *n3 = n1*n2;  
  GCD = GetGCD(*m3, *n3);
  *m3 /= GCD;
  *n3 /= GCD;
}

int GetGCD(int a, int b)
{
  while (a != b) {
  if (a > b)
    a -= b;
  else
    b -= a;
  }
  return a;
}

