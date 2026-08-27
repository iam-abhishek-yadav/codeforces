#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int oneRow, oneColumn;

    for (int row = 0; row < 5; row++) {
        for (int column = 0; column < 5; column++) {
            int value;
            cin >> value;

            if (value == 1) {
                oneRow = row;
                oneColumn = column;
            }
        }
    }

    int moves = abs(oneRow - 2) + abs(oneColumn - 2);

    cout << moves << '\n';

    return 0;
}