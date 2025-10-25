#include<bits/stdc++.h>
using namespace std;

int main() {
    int L, B;
    cin >> L >> B;

    int years = 0;

    while (L <= B) {
        L =L*3;
        B =B*2;
        years++;
    }

    cout << years << endl;

    return 0;
}
