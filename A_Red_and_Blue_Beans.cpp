#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
   cin>>t;
    while (t--) {
        long long r, b, d;
        cin >> r >> b >> d;

        long long hi = max(r, b);
        long long lo = min(r, b);

        if ( (d + 1) * lo >=hi) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
