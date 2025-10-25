#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll dif = abs(a - b);

        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }

        ll x = a % dif;
        ll y = b % dif;

        if (x != y)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            ll ans = min(dif - x, y);
            cout << dif << " " << ans << endl;
        }
    }
    return 0;
}
