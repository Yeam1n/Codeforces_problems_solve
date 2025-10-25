#include<bits/stdc++.h>
using namespace std;
int main() {
    int year;
    cin >> year;
    for (year = year + 1; ; year++) {
        int w = year / 1000;
        int x = (year / 100) % 10;
        int y = (year / 10) % 10;
        int z = year % 10;
        if (w != x && w != y && w != z && x != y && x != z && y != z) {
            cout << year << endl;
            break;
        }
    }
    return 0;
}
