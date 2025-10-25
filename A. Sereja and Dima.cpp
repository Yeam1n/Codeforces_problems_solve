#include <bits/stdc++.h>
using namespace std;

int main()
{    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    int card[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> card[i];
    }

    int l = 0;
    int r = n - 1;
    int sereja = 0;
    int dima = 0;
    int turn = 0; // 0 for Sereja, 1 for Dima

    while (l <= r)
    {
        int choose;
        if (card[l] > card[r])
        {
            choose = card[l];
            l++;
        }
        else
        {
            choose = card[r];
            r--;
        }

        if (turn % 2 == 0)
        {
            sereja += choose;
        }
        else
        {
            dima += choose;
        }

        turn++; // switch turn
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
