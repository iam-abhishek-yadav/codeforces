#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        long long l = 0, r = 0;
        int changes = 0;

        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;

            long long left = a - x;
            long long right = a + x;

            if (i == 0) {
                l = left;
                r = right;
                continue;
            }

            l = max(l, left);
            r = min(r, right);

            if (l > r) {
                changes++;

                l = left;
                r = right;
            }
        }

        cout << changes << '\n';
    }

    return 0;
}