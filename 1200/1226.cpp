#include <stdio.h>

int main()
{
	int a1, a2, a3, a4, a5, a6, a7;
	int b1, b2, b3, b4, b5, b6;
	int cnt = 0, bonus = 0;

	scanf("%d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7);
	scanf("%d %d %d %d %d %d", &b1, &b2, &b3, &b4, &b5, &b6);

	if(b1 == a1) cnt++;
	else if(b1 == a2) cnt++;
	else if(b1 == a3) cnt++;
	else if(b1 == a4) cnt++;
	else if(b1 == a5) cnt++;
	else if(b1 == a6) cnt++;
	else if(b1 == a7) bonus++;

	if(b2 == a1) cnt++;
	else if(b2 == a2) cnt++;
	else if(b2 == a3) cnt++;
	else if(b2 == a4) cnt++;
	else if(b2 == a5) cnt++;
	else if(b2 == a6) cnt++;
	else if(b2 == a7) bonus++;

	if(b3 == a1) cnt++;
	else if(b3 == a2) cnt++;
	else if(b3 == a3) cnt++;
	else if(b3 == a4) cnt++;
	else if(b3 == a5) cnt++;
	else if(b3 == a6) cnt++;
	else if(b3 == a7) bonus++;

	if(b4 == a1) cnt++;
	else if(b4 == a2) cnt++;
	else if(b4 == a3) cnt++;
	else if(b4 == a4) cnt++;
	else if(b4 == a5) cnt++;
	else if(b4 == a6) cnt++;
	else if(b4 == a7) bonus++;

	if(b5 == a1) cnt++;
	else if(b5 == a2) cnt++;
	else if(b5 == a3) cnt++;
	else if(b5 == a4) cnt++;
	else if(b5 == a5) cnt++;
	else if(b5 == a6) cnt++;
	else if(b5 == a7) bonus++;

	if(b6 == a1) cnt++;
	else if(b6 == a2) cnt++;
	else if(b6 == a3) cnt++;
	else if(b6 == a4) cnt++;
	else if(b6 == a5) cnt++;
	else if(b6 == a6) cnt++;
	else if(b6 == a7) bonus++;

	if(cnt == 6) printf("1");
	else if(cnt == 5 && bonus == 1) printf("2");
	else if(cnt == 5) printf("3");
	else if(cnt == 4) printf("4");
	else if(cnt == 3) printf("5");
	else printf("0");
	return 0;
}
