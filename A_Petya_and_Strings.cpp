#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin >> s1>>s2;

    int l1=s1.length();
    int l2=s2.length();

    for (int i = 0; i < l1; i++)
    {
        s1[i] = tolower(s1[i]);
    }
    for (int j = 0; j < l2; j++)
    {
        s2[j] = tolower(s2[j]);
    }

    if (s1 < s2)
    {
        cout << -1 << endl;
    }
    else if (s1 > s2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
