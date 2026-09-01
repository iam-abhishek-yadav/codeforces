#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        if (c % 2 == 1) {
            if (a >= b)
                cout << "First\n";
            else
                cout << "Second\n";
        } else {
            if (a > b)
                cout << "First\n";
            else
                cout << "Second\n";
        }
    }

    return 0;
}