#include <cstdio>

int n, s, ans;
int a[20];

void solve(int index, int sums) {
    if (index >= n) {
        if (sums == s) ans++;
        return;
    }
    solve(index+1, sums+a[index]);
    solve(index+1, sums);
}

int main() {
    scanf("%d %d", &n, &s);
    for (int i=0; i<n; i++) scanf("%d", &a[i]);
    solve(0, 0);
    if (s == 0) ans--;
    printf("%d\n", ans);
    return 0;
}
