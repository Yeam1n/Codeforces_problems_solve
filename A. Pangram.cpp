#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> s;
    int n;
    cin >> n;

    string str;
    cin >> str;

    for (int i = 0; i < n; i++)
    {
        s.insert(tolower(str[i]));
    }

    if (s.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
