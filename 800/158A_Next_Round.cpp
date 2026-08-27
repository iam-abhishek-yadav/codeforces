#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int scores[50];

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int qualifyingScore = scores[k - 1];
    int advancingParticipants = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= qualifyingScore && scores[i] > 0) {
            advancingParticipants++;
        }
    }

    cout << advancingParticipants << endl;

    return 0;
}