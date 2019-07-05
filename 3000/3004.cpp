
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct robot {
    int id;
    int gas;
    int rank;
    robot (int iid, int igas) : id(iid), gas(igas) { }
    bool operator < (const robot& r) const { return gas < r.gas; }
};

vector<robot> vbots;

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        vbots.push_back ( robot(i,a) );
    }
    auto sbots = vbots;
    sort (sbots.begin(), sbots.end());

    for (int rnk = 0; rnk < sbots.size(); rnk++) {
        vbots[ sbots[rnk].id ].rank = rnk;
    }
    
    for (auto v : vbots)
        printf ("%d ", v.rank);
    return 0;
}

