#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long sum = 0; // initialize sum
        int mx = INT_MIN;  // better for negative values
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum = sum+x;
            mx = max(mx, x);
        }
        double ans = mx + double(sum - mx) / (n - 1);
        cout << fixed << setprecision(6) << ans << "\n";
    }
    return 0;
}
