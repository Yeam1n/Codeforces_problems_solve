#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool found = false;

        for (int i = 0; i < n - 1; i++) {
            if ((s[i] == 'a' && s[i + 1] == 'b') ||
                (s[i] == 'b' && s[i + 1] == 'a')) {
                cout << i + 1 << " " << i + 2 << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}
