#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        int freq[21] = {0};
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int count = 0; // Count pairs
        for (int i = 1; i <= n; i++) {
            count += freq[i] / 2;
        }

        cout << count << endl;
    }

    return 0;
}
