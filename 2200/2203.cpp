#include<stdio.h>
#include<math.h>

int main()
{
	unsigned long long int num,b,c,d,mok,nmg;
	unsigned long long int a[1000];

	scanf("%llu",&num);
	b=-1;

	while(1){
		c=2;
		d=(unsigned long long int)sqrt(num);

		while(1){
			if(c>d){
				if(c>d){
					c = num;
					break;
				}
			}
			mok = num / c;
			nmg = num-mok*c;

			if(nmg ==0){
				break;
			}else{
				c++;
			}
		}
		b++;
		a[b] = c;
		if(num==c){
			break;
		}
		num = mok;
	}
		printf("%llu",a[b]);
}

