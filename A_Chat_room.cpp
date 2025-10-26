#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string w = "hello";
    int wl=w.length();
    int j = 0;  
    int l=s.length();

    for (int i = 0; i < l; i++)
    {
        if (s[i] == w[j])
        {
            j++; 
        }

        if (j == w.length())
        {
            break;
        }
    }

    if (j ==wl)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
