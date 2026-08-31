#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int xK, yK;
        cin >> xK >> yK;

        int xQ, yQ;
        cin >> xQ >> yQ;

        set<pair<int, int>> positions;

        int dx[] = {a, a, -a, -a, b, b, -b, -b};
        int dy[] = {b, -b, b, -b, a, -a, a, -a};

        for (int i = 0; i < 8; i++) {
            positions.insert({xK + dx[i], yK + dy[i]});
        }

        int answer = 0;

        for (auto position : positions) {
            int x = position.first;
            int y = position.second;

            int dx = abs(x - xQ);
            int dy = abs(y - yQ);

            if ((dx == a && dy == b) || (dx == b && dy == a)) {
                answer++;
            }
        }

        cout << answer << endl;
    }

    return 0;
}