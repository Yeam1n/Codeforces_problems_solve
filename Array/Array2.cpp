#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int X;
    cin >> X;
    int position = -1;
    for (int i = 0; i < N; ++i) {
        if (A[i] == X) {
            position = i;
            break;
        }
    }

    cout << position << endl; 
    return 0;
}
