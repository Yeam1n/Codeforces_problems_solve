#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt1 = 0; // Anton
    int cnt2 = 0; // Danik

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A') {
            cnt1++;
        }
        else if (s[i] == 'D') {
            cnt2++;
        }
    }

    if (cnt1 > cnt2) {
        cout << "Anton" << endl;
    }
    else if (cnt1 < cnt2) {
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }

    return 0;
}
