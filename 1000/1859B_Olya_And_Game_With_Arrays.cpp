#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        int mn = INT_MAX, mn2 = INT_MAX;

        while (n--) {
            int m;
            cin >> m;

            vector<int> a(m);
            for (int &x : a)
                cin >> x;

            sort(a.begin(), a.end());

            mn = min(mn, a[0]);
            mn2 = min(mn2, a[1]);
            sum += a[1];
        }

        cout << sum - mn2 + mn << '\n';
    }
}