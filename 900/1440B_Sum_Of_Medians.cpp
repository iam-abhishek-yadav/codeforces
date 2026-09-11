#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n * k);

        for (auto &x : a) {
            cin >> x;
        }

        long long ans = 0;

        int pos = n * k - 1 - n / 2;

        for (int count = 0; count < k; count++) {
            ans += a[pos];
            pos -= n / 2 + 1;
        }

        cout << ans << '\n';
    }

    return 0;
}