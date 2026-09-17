#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> left(26), right(26);

        int l = 0, r = 0;

        for (char c : s) {
            if (right[c - 'a']++ == 0)
                r++;
        }

        int ans = 0;

        for (int i = 0; i < n - 1; i++) {
            int x = s[i] - 'a';

            if (left[x]++ == 0)
                l++;

            if (--right[x] == 0)
                r--;

            ans = max(ans, l + r);
        }

        cout << ans << '\n';
    }

    return 0;
}