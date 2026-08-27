#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int previous;
        cin >> previous;

        bool sorted = true;

        for (int i = 1; i < n; i++) {
            int current;
            cin >> current;

            if (current < previous) {
                sorted = false;
            }

            previous = current;
        }

        cout << (k > 1 || sorted ? "YES\n" : "NO\n");
    }

    return 0;
}