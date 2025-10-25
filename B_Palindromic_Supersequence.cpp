#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string x = s;
    reverse(x.begin(), x.end());  // Reverse in place

    if (s == x)
    {
        cout << s;
    }
    else
    {
        string b = x + s;
        cout << b;
    }

    return 0;
}
