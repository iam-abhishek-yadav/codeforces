#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int digits = to_string(n).size();
        int first = to_string(n)[0] - '0';

        cout << (digits - 1) * 9 + first << '\n';
    }

    return 0;
}