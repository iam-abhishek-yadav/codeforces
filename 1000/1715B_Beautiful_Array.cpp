#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k, b, s;
        cin >> n >> k >> b >> s;

        long long base = k * b;
        long long extra = s - base;

        if (extra < 0) {
            cout << -1 << '\n';
            continue;
        }

        if (extra > 1LL * n * (k - 1)) {
            cout << -1 << '\n';
            continue;
        }

        vector<long long> a(n);

        a[0] = base;

        for (int i = 0; i < n && extra > 0; i++) {
            long long add = min(extra, k - 1);
            a[i] += add;
            extra -= add;
        }

        for (long long x : a)
            cout << x << ' ';

        cout << '\n';
    }

    return 0;
}