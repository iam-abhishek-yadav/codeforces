#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int stations[50];

        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }

        int answer = stations[0];

        for (int i = 1; i < n; i++) {
            answer = max(answer, stations[i] - stations[i - 1]);
        }

        answer = max(answer, (x - stations[n - 1]) * 2);

        cout << answer << '\n';
    }

    return 0;
}