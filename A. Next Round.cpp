#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int pos = p[k - 1];
    int nr = 0;

    for (int i = 0; i < n; i++) {
        if (p[i] >= pos && p[i] > 0) {
            nr++;
        }
    }

    cout << nr << endl;
    return 0;
}
