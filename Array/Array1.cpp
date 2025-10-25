#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long absolute_sum = 0;
    for (int i = 0; i < N; ++i) {
        long long num;
        cin >> num;
        absolute_sum = absolute_sum + num;
    }

    cout << abs(absolute_sum) << endl;
    return 0;
}