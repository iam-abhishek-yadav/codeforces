#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int twos = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] == 2)
                twos++;
        }

        if (twos % 2) {
            cout << -1 << '\n';
            continue;
        }

        int need = twos / 2;
        int count = 0;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2)
                count++;

            if (count == need) {
                cout << i + 1 << '\n';
                break;
            }
        }
    }

    return 0;
}