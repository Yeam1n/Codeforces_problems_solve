#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int min_value = A[0];
    int min_position = 1;

    for (int i = 1; i < N; ++i) {
        if (A[i] < min_value) {
            min_value = A[i];
            min_position = i + 1;
        }
    }

    cout << min_value << " " << min_position << endl;

    return 0;
}
