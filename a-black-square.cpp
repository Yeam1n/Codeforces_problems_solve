#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    int result = 0;

    for(int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    string s;
    cin >> s;

    for (char ch : s)
    {
        int strip = ch - '0';         // ch is already a single character
        result += arr[strip - 1];     // add the corresponding calorie
    }

    cout << result;
    return 0;
}
