
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        vector<int> pre(m + 1, n), suf(m + 1, -1);
        pre[0] = -1;
        int j = 0;
        for (int i = 0; i < n && j < m; ++i) {
            if (a[i] >= b[j]) {
                pre[j + 1] = i;
                ++j;
            }
        }

        j = m - 1;
        suf[m] = n;
        for (int i = n - 1; i >= 0 && j >= 0; --i) {
            if (a[i] >= b[j]) {
                suf[j] = i;
                --j;
            }
        }
        if (pre[m] < n) {
            cout << "0\n";
            continue;
        }
        int ans = INT_MAX;
        for (int i = 1; i <= m; ++i) {
            if (pre[i - 1] < suf[i]) {
                ans = min(ans, b[i - 1]);
            }
        }
        cout << (ans == INT_MAX ? -1 : ans) << '\n';
    }
    return 0;
}


