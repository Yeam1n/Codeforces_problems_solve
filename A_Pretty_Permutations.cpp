#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }

        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        else
        {

            for (int i = 0; i < n - 3; i += 2)
            {
                swap(arr[i], arr[i + 1]);
            }
            int a = arr[n - 3];
            int b = arr[n - 2];
            int c = arr[n - 1];
            arr[n - 3] = c;
            arr[n - 2] = a;
            arr[n - 1] = b;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
