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

        vector<int> s(n);
        for (int &x : s)
            cin >> x;

        vector<int> p(n);

        bool possible = true;

        for (int i = 0; i < n; ) {
            int j = i;

            while (j < n && s[j] == s[i])
                j++;

            if (j - i == 1) {
                possible = false;
                break;
            }

            for (int k = i; k < j; k++) {
                p[k] = (k + 1 < j ? k + 1 : i);
            }

            i = j;
        }

        if (!possible) {
            cout << -1 << '\n';
            continue;
        }

        for (int x : p)
            cout << x + 1 << ' ';

        cout << '\n';
    }

    return 0;
}