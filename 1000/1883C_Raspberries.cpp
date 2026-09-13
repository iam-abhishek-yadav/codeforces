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

        int ans = INT_MAX, even = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x % k == 0)
                ans = 0;
            else
                ans = min(ans, k - x % k);

            if (x % 2 == 0)
                even++;
        }

        if (k == 4)
            ans = min(ans, max(0, 2 - even));

        cout << ans << '\n';
    }
}