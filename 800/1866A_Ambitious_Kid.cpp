#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int minDiff = INT_MAX;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        minDiff = min(minDiff, abs(a));
    }

    cout << minDiff << endl;

    return 0;
}