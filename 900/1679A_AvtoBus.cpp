#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 != 0 || n < 4) {
            cout << -1 << '\n';
            continue;
        }

        long long mn = (n + 5) / 6;
        long long mx = n / 4;

        cout << mn << ' ' << mx << '\n';
    }

    return 0;
}