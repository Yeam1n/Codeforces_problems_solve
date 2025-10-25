#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;

    while (n--) {
        string statement;
        cin >> statement;

        if (statement.find("++") < statement.size()) {
            ++x;
        }
        else if (statement.find("--") < statement.size()) {
            --x;
        }
    }

    cout << x;
    return 0;
}
