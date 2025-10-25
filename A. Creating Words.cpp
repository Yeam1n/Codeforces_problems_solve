#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of string pairs
    for (int i = 0; i < n; i++) {
        string str1, str2;
        cin >> str1 >> str2; // Input a pair of strings

        // Swap first characters
        swap(str1[0], str2[0]);

        // Print the result for the current pair
        cout << str1 << " " << str2 << endl;
    }
    return 0;
}
