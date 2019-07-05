#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class sc {
public:
	int n;
	int sc1, sc2;
};

bool comp(sc a, sc b) {
	if (a.sc1 > b.sc1)return true;
	else if (a.sc1 < b.sc1)return false;
	else if (a.sc2 > b.sc2)return true;
	else if (a.sc2 < b.sc2)return false;

	else if (a.n > b.n)return false;
	else if (a.n < b.n)return true;

	else return false;
}

int main()
{
	int n;
	sc arr[1001];
	int i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> arr[i].sc1 >> arr[i].sc2;
		arr[i].n = i + 1;
	}
	sort(arr, arr + n, comp);
	for (i = 0; i < n; i++) {
		cout << arr[i].n << " " << arr[i].sc1 << " " << arr[i].sc2 << endl;
	}
}


