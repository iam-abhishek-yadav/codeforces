#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int emptyCells = 0;

        for (char cell : s) {
            if (cell == '.') {
                emptyCells++;
            }
        }

        if (s.find("...") != string::npos) {
            cout << 2 << '\n';
        } else {
            cout << emptyCells << '\n';
        }
    }

    return 0;
}