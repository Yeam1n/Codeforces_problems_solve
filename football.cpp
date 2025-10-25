#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        int goal=0;
        for(int i=0;i<t-1;i++)
        {
            int g;
            cin>>g;
            goal=goal+g;
        }
        cout<<-1*goal<<endl;
    }

    return 0;
}
