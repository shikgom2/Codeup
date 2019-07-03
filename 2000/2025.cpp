#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

char S[110];

int main()
{
	scanf("%s", S);
	string s = S;
	string a = s.substr(0, 4);
	string b = s.substr(5, 2) + s.substr(8, 2);
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	puts((a == b) ? "yes" : "no");
	return 0;
}
