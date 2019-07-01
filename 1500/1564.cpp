#include <stdio.h>

int a, b;

int gcd(int a,int b) //최대공약수를 반환하는 함수
{         
           int i,j;
           int temp; //공약수를 저장할 변수

           j = (a<b)?a:b; //둘중 작은수를 구함

           for(i=1;i<=j;i++) {
                     if(a%i==0 && b%i==0)
                                temp = i;
           }
           return temp;
}

int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}
