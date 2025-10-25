#include <bits/stdc++.h>
using namespace std;

int main() {   
    int t;
    cin >> t;
    while (t--) {
        int l;
        cin >> l;
        string s;
        cin >> s;

        if (l != 5) {
            cout << "NO" << endl;
            continue;
        }

        sort(s.begin(), s.end());
        if (s == "Timru") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
