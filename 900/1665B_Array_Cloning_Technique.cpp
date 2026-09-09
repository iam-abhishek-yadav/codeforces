#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int cnt = 0;

        for (auto &[x, f] : freq) {
            cnt = max(cnt, f);
        }

        int ans = 0;

        while (cnt < n) {
            ans++;

            ans += min(cnt, n - cnt);

            cnt = min(n, cnt * 2);
        }

        cout << ans << '\n';
    }

    return 0;
}