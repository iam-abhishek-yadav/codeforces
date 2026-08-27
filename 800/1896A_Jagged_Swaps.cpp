#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int first;
        cin >> first;

        for (int i = 1; i < n; i++) {
            int value;
            cin >> value;
        }

        cout << (first == 1 ? "YES\n" : "NO\n");
    }

    return 0;
}