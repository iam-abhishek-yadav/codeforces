#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        map<char, int> mp;

        for (char ch : s)
            mp[ch]++;

        int oddFrequencies = 0;

        for (auto [ch, freq] : mp) {
            if (freq % 2 != 0)
                oddFrequencies++;
        }

        if (oddFrequencies > k + 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}