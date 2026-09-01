#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n >> s;

        int longest = 1;
        int current = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                current++;
            } else {
                current = 1;
            }

            longest = max(longest, current);
        }

        cout << longest + 1 << '\n';
    }

    return 0;
}