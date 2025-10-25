#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n; 
    cin>>n;
    for(int i=0;i<n;i++)
     {
        int m;
        ll d,x,y;
        cin>>m>>d>>x>>y;
        ll D =d*d;
        vector<int>r;
        for(int i=1;i<=m;++i) 
           {
            ll a,b; 
            cin>>a>>b;
            int q=(a-x);
            int u=(b-y);
            if(q*q+u*u>D)
                {r.push_back(i);
                }
        }
        if(r.empty())
        {cout << "FE!N";
        }
        else{
            cout<<r.size()<<endl;
            for(int i : r)
            { cout << i <<" ";
            }
            cout<<endl;
        }
    }
}
