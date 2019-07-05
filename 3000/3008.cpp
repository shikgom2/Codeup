#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> dwarf;
    int input, sum = 0;
    while (cin >> input) {
        dwarf.push_back(input);
        sum += input;
    }
 
    for (int i = 0; i < dwarf.size() - 1; i++) {
        int tmp = sum - dwarf[i];
        if (tmp <= 100)
            continue;
        for (int j = i + 1; j < dwarf.size(); j++) {
            if (tmp - dwarf[j] == 100) {
                dwarf[i] = 0;
                dwarf[j] = 0;
                goto END;
            }
        }
    }
    END:
 
    sort(dwarf.begin(), dwarf.end());
    for (int i = 2; i < dwarf.size(); i++)
        cout << dwarf[i] << "\n";
 
    return 0;
}

