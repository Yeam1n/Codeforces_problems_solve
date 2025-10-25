#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, S = 0;
        string s;
        cin >> n >> s;
        for (char c : s) {
            if (c == '1')
                S++;
        }
        int result = n + (n - 2) * S;
        cout << result << endl;
    }
    return 0;
}
