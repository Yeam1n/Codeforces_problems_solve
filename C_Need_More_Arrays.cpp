#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        map<int, int> freq;
        for (int x : a) freq[x]++;

        int max_arrays = 0;
        for (auto &p : freq) {
            int x = p.first;
            int current_sum = freq[x] + freq[x + 1];
            if (current_sum > max_arrays) max_arrays = current_sum;
        }

        cout << max_arrays << "\n";
    }

    return 0;
}
