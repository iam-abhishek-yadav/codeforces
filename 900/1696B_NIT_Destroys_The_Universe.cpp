#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        int segments = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] != 0 && (i == 0 || a[i - 1] == 0)) {
                segments++;
            }
        }

        if (segments == 0)
            cout << 0 << '\n';
        else if (segments == 1)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }

    return 0;
}