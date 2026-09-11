#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (i == 0)
                ans = x;
            else
                ans &= x;
        }

        cout << ans << '\n';
    }

    return 0;
}