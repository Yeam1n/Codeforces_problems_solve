#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cl,ml;
    cl=1;
    ml=1;
    cin >> n;
    int laav[n];

    for(int i=0;i<n;i++)
    {
        cin >>laav[i];
    }
        for(int i=1;i<n;i++)
        {
            if (laav[i]>=laav[i-1])
            {
                cl++;
                ml = max(ml,cl);
            }
            else
               { cl = 1;}
        }
    cout<<ml<< endl;
    return 0;
}
