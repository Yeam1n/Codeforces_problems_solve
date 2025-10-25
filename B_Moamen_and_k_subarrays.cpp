#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> ar(n);
        map<ll, ll> br;
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
            br[ar[i]] = i;
        }

        sort(ar.begin(), ar.end());

        ll cnt = 1; // At least one segment
        for (ll i = 0; i < n - 1; i++)
        {
            if (br[ar[i + 1]] - br[ar[i]] != 1)
                cnt++;
        }

        if (cnt > k)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
