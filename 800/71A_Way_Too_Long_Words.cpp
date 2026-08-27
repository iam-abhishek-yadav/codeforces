#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string str;
        cin >> str;

        int count = str.length();

        if (count > 10) {
            cout << str[0] << count - 2 << str[count - 1] << '\n';
        } else {
            cout << str << '\n';
        }
    }

    return 0;
}