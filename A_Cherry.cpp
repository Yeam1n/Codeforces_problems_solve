#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        vector<long long> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }

        long long int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, ar[i] * ar[i + 1]);
        }

        cout << ans << endl;
    }
    return 0;
}
