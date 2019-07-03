#include <stdio.h>
#include <string.h>

int main()
{
	char dic[256][5], s;

	strcpy(dic['0'], "0000");
	strcpy(dic['1'], "0001");
	strcpy(dic['2'], "0010");
	strcpy(dic['3'], "0011");
	strcpy(dic['4'], "0100");
	strcpy(dic['5'], "0101");
	strcpy(dic['6'], "0110");
	strcpy(dic['7'], "0111");
	strcpy(dic['8'], "1000");
	strcpy(dic['9'], "1001");
	strcpy(dic['A'], "1010");
	strcpy(dic['B'], "1011");
	strcpy(dic['C'], "1100");
	strcpy(dic['D'], "1101");
	strcpy(dic['E'], "1110");
	strcpy(dic['F'], "1111");

	for(;~scanf("%c", &s);)
		printf("%s ", dic[s]);
	return 0;
}
