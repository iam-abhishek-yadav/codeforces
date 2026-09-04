#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int prev;
        cin >> prev;

        int ans = 0;

        for (int i = 1; i < n; i++) {
            int curr;
            cin >> curr;

            if (prev % 2 == curr % 2)
                ans++;

            prev = curr;
        }

        cout << ans << '\n';
    }

    return 0;
}