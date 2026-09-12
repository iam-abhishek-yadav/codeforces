#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int cnt[2] = {0, 0};

        for (char c : s) {
            cnt[c - '0']++;
        }

        int used[2] = {0, 0};
        int len = 0;

        for (char c : s) {
            int need = 1 - (c - '0');

            if (cnt[need] - used[need] > 0) {
                used[need]++;
                len++;
            } else {
                break;
            }
        }

        cout << (int)s.size() - len << '\n';
    }

    return 0;
}