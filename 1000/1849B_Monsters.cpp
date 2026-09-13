#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<pair<long long, int>> v(n);

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            long long rem = x % k;
            if (rem == 0) rem = k;

            v[i] = {rem, i + 1};
        }

        sort(v.begin(), v.end(), [](auto &x, auto &y) {
            if (x.first != y.first)
                return x.first > y.first;
            return x.second < y.second;
        });

        for (auto [rem, idx] : v)
            cout << idx << ' ';

        cout << '\n';
    }
}