#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int twos = 0;
        int threes = 0;

        while (n % 2 == 0) {
            n /= 2;
            twos++;
        }

        while (n % 3 == 0) {
            n /= 3;
            threes++;
        }

        if (n != 1 || twos > threes) {
            cout << -1 << '\n';
        } else {
            cout << 2 * threes - twos << '\n';
        }
    }

    return 0;
}