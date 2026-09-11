#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, ones = 0, zeros = 0;
        cin >> n;

        while (n--) {
            int x;
            cin >> x;

            if (x == 1) ones++;
            if (x == 0) zeros++;
        }

        cout << ones * (1LL << zeros) << '\n';
    }
}