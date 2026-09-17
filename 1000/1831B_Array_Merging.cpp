#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        vector<int> cntA(2 * n + 1, 0);
        vector<int> cntB(2 * n + 1, 0);

        int curr = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                curr++;
            } else {
                cntA[a[i - 1]] = max(cntA[a[i - 1]], curr);
                curr = 1;
            }
        }

        cntA[a[n - 1]] = max(cntA[a[n - 1]], curr);

        curr = 1;

        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) {
                curr++;
            } else {
                cntB[b[i - 1]] = max(cntB[b[i - 1]], curr);
                curr = 1;
            }
        }

        cntB[b[n - 1]] = max(cntB[b[n - 1]], curr);

        int ans = 0;

        for (int x = 1; x <= 2 * n; x++) {
            ans = max(ans, cntA[x] + cntB[x]);
        }

        cout << ans << '\n';
    }

    return 0;
}