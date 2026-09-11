#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> p(n);

        for (int &x : p) {
            cin >> x;
        }

        bool found = false;

        for (int i = 0; i < n - 2; i++) {
            if (p[i] < p[i + 1] && p[i + 1] > p[i + 2]) {
                cout << "YES\n";
                cout << i + 1 << " " << i + 2 << " " << i + 3 << '\n';

                found = true;
                break;
            }
        }

        if (!found) {
            cout << "NO\n";
        }
    }

    return 0;
}