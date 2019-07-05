#include<algorithm>
#include<iostream>
#define N_ 100000
using namespace std;
typedef long long ll;

long long int a, b, ans; ll lft, rgt;

int main() {
    cin >> a >> b;

    lft = 1;  rgt = b;

    while (lft <= rgt) {
        long long int mid = (lft + rgt) >> 1;
        ll Sum = 0;
        for (int i = 1; i <= a; i++)
            Sum += min(a, mid / i);
        if (Sum >= b)
            rgt = mid - 1, ans = mid;
        else
            lft = mid + 1;
    }
    cout << ans;
    return 0;
}
