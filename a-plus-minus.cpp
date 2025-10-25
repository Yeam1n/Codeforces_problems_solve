#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main () {
     ios_base::sync_with_stdio(false);
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        ll c;  // using ll (long long) for c

        cin >> a >> b >> c;

        if (a + b == c) {
            cout << "+" << endl;
        }
        else if (a - b == c) {
            cout << "-" << endl;
        }
    }

    return 0;
}
