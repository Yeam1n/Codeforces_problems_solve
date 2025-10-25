#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int f=0;
 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x<0)
            {
                f=1;}
        }
        if(f)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<101<<"\n";
            for (int i = 0; i <= 100; i++)
            {
                cout<<i<<" ";
            }
            cout<<"\n";   
        }  
    }
    return 0;
}