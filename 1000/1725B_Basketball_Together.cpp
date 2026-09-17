#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long d;
    cin >> n >> d;

    vector<long long> p(n);

    for (auto &x : p)
        cin >> x;

    sort(p.begin(), p.end());

    int left = 0;
    int right = n - 1;
    int ans = 0;

    while (left <= right) {
        long long strongest = p[right];

        int need = d / strongest + 1;

        if (right - left + 1 < need)
            break;

        ans++;

        right--;
        left += need - 1;
    }

    cout << ans << '\n';

    return 0;
}