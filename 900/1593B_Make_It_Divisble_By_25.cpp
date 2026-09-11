#include <bits/stdc++.h>
using namespace std;

int solve(string s, string target) {
    int j = 1;
    int moves = 0;

    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == target[j]) {
            j--;

            if (j < 0) {
                return moves;
            }
        } else {
            moves++;
        }
    }

    return 1e9;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int ans = min({
            solve(s, "00"),
            solve(s, "25"),
            solve(s, "50"),
            solve(s, "75")
        });

        cout << ans << '\n';
    }

    return 0;
}