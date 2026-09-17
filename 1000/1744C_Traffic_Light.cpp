#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        if (c == 'g') {
            cout << 0 << '\n';
            continue;
        }

        s += s;

        int nextG = -1;
        int ans = 0;

        for (int i = 2 * n - 1; i >= 0; i--) {
            if (s[i] == 'g')
                nextG = i;

            if (i < n && s[i] == c)
                ans = max(ans, nextG - i);
        }

        cout << ans << '\n';
    }

    return 0;
}