#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, p;
        cin >> n >> p;

        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i].first;

        for (int i = 0; i < n; i++)
            cin >> v[i].second;

        sort(v.begin(), v.end(), [](auto &x, auto &y) {
            return x.second < y.second;
        });

        long long ans = p;
        int notified = 1;

        for (auto [a, b] : v) {
            if (notified >= n) break;

            int cnt = min(a, n - notified);

            if (b < p) {
                ans += 1LL * cnt * b;
                notified += cnt;
            } else {
                ans += 1LL * (n - notified) * p;
                notified = n;
            }
        }

        cout << ans << '\n';
    }
}