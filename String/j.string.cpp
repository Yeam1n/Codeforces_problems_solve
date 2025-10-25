#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s, t;
        cin >> s >> t;

        string result = "";

        int lens = s.length();
        int lent = t.length();
        int maxlen = max(lens, lent);

        for (int i = 0; i < maxlen; i++) {
            if (i < lens) {
                result += s[i];
            }
            if (i < lent) {
                result += t[i];
            }
        }

        cout << result << endl;
    }

    return 0;
}
