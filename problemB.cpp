#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int leftNeeded = -l;

        int leftMoves;
        if (m < leftNeeded) {
            leftMoves = m;
        } else {
            leftMoves = leftNeeded;
        }

        int rightMoves = m - leftMoves;

        cout << -leftMoves << " " << rightMoves << endl;
    }

    return 0;
}
