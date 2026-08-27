#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int maximumDominoes = (m * n) / 2;

    cout << maximumDominoes << endl;

    return 0;
}