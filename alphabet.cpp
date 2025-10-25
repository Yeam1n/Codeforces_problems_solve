#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int uppercount = 0;
    int lowercount = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            uppercount++;
        }
        else if (islower(s[i])) {
            lowercount++;
        }
    }
    if (uppercount > lowercount) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}
