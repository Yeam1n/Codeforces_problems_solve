#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cost, dollar, banana;
    cin >> cost >> dollar >> banana;

    int total = 0;

    for (int i = 1; i <= banana; i++)
    {
        total += cost * i;
    }
    if(total>dollar)
        cout << total-dollar << endl;
    else
        cout << 0 << endl;

    return 0;
}
