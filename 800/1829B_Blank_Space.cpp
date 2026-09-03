#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int curr = 0, mx = 0;

        for (int i = 0; i < n; i++) {
            int currValue;
            cin >> currValue;

            if (currValue == 0) {
                curr++;
            } else {
                mx = max(mx, curr);
                curr = 0;
            }
        }

        mx = max(mx, curr);

        cout << mx << endl;
    }

    return 0;
}