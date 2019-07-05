#include <cstdio>

int arr[40], n, s, a[4000001];
long long cnt;

void f(int p, int t, bool c) {
    if (p == n) {
        if (c == false)
            return;
        if (t == s)
            cnt++;
        a[t + 2000000]++;

        return;
    }

    f(p + 1, t + arr[p], true);
    f(p + 1, t - arr[p], true);

    //f(p + 1, t, c);
}

void g(int p, int t, bool c) {
    if (p == n) {
        if (c == false)
            return;
        if (t == s)
            cnt++;
        if (s - t > 2000000 || s - t < -2000000)
            return;
        cnt += a[s - t + 2000000];

        return;
    }

    g(p + 1, t + arr[p], true);
    g(p + 1, t - arr[p], true);
    //g(p + 1, t, c);
}

int main() {
    int i;

    scanf("%d %d", &s, &n);

    for (i = 0;i < n;++i)
        scanf("%d", &arr[i]);

    f(0, 0, false);
    //g(n / 2, 0, false);

    printf("%lld", cnt);

    return 0;
}

