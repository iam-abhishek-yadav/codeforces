#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (auto &x : a)
            cin >> x;

        int ans = 0;

        for (int i = n - 2; i >= 0; i--) {
            while (a[i] >= a[i + 1] && a[i] > 0) {
                a[i] /= 2;
                ans++;
            }

            if (a[i] >= a[i + 1]) {
                ans = -1;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}