#include <iostream>
using namespace std;

int main() {
    int numberOfProblems;
    cin >> numberOfProblems;

    int solvedProblems = 0;

    while (numberOfProblems--) {
        int confidentFriends = 0;

        for (int friendNumber = 0; friendNumber < 3; friendNumber++) {
            int knowsSolution;
            cin >> knowsSolution;

            if (knowsSolution == 1) {
                confidentFriends++;
            }
        }

        if (confidentFriends >= 2) {
            solvedProblems++;
        }
    }

    cout << solvedProblems << endl;

    return 0;
}