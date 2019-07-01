#include<stdio.h>
int main()
 {
 int n1, n2, n3, i, gcd;
 scanf("%d%d%d", &n1, &n2, &n3);
 for(i=n1; i>0; i--) 
 if(n1%i==0 && n2%i==0 && n3%i==0)
 break;
 printf("%d ", i);
 return 0;
 }
