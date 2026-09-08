#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    int cnt[26] = {};

    int i = s.size() - 1;
    int j = t.size() - 1;

    while (i >= 0 && j >= 0) {
        if (s[i] == t[j]) {
            if (cnt[s[i] - 'A'] > 0) {
                cout << "NO\n";
                return;
            }

            i--;
            j--;
        } else {
            cnt[s[i] - 'A']++;
            i--;
        }
    }

    if (j >= 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}