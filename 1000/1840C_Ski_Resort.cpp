#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        long long q;
        cin >> n >> k >> q;

        long long ans = 0, len = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (x <= q) {
                len++;

                if (len >= k)
                    ans += len - k + 1;
            } else {
                len = 0;
            }
        }

        cout << ans << '\n';
    }
}