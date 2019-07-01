#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}
int mid(int a, int b, int c)
{
	int temp;
	if(a < b)   // a,b중 큰수를 a로
    {
        temp = a;
		a = b;
		b = temp;
    }

    if(a < c)   // a,c중 큰수를 a으로
    {
        temp = a;
		a = c;
		c = temp;
    }

    if(b < c)   // b,c중 큰수를 b로
    {
        temp = b;
		b = c;  
		c = temp;
    }
    return b;
}
int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}
