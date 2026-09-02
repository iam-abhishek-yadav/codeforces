#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int minus = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == -1)
                minus++;
        }

        int ans = 0;

        if (minus > n - minus) {
            ans = (2 * minus - n + 1) / 2;
            minus -= ans;
        }

        if (minus % 2 != 0)
            ans++;

        cout << ans << '\n';
    }

    return 0;
}