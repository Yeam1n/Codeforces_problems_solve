#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int size = 2 * n;
        vector<int> ar(size);
        
        for (int i = 0; i < size; i++) {
            cin >> ar[i];
        }

        sort(ar.begin(), ar.end());

        vector<int> result(size);
        int left = 0, right = n;

        for (int i = 0; i < size; ++i) {
            if (i % 2 == 0) {
                result[i] = ar[right++];
            } else {
                result[i] = ar[left++];
            }
        }

        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
