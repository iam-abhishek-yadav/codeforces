#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int minDiff = INT_MAX;
        bool isSorted = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i > 0) {
                minDiff = min(minDiff, a[i] - a[i - 1]);
                if (a[i] < a[i - 1]) {
                    isSorted = false;
                }
            }
        }
        if (!isSorted) {
            cout << 0 << endl;
        } else {
            cout << minDiff/2+ 1 << endl;
        }
    }
    return 0;
}