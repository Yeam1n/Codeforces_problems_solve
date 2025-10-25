#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        
        int n = stoi(s);
        int r = round(sqrt(n));
        
        if (r*r == n && r <= 99) {
            cout << "0 " << r << "\n";
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}