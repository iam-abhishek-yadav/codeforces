#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long up = d - b;

        if (up < 0 || a + up < c) {
            cout << -1 << '\n';
        } else {
            long long left = a + up - c;
            cout << up + left << '\n';
        }
    }

    return 0;
}