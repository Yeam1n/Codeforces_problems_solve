#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Find the index of the minimum and maximum numbers
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < N; ++i) {
        if (A[i] < A[minIndex]) {
            minIndex = i;
        }
        if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
    }

    // Swap the minimum and maximum values
    int temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;

    // Print the array after the swap
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}
