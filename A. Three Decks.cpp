#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll total=a+b+c;
    if(total%3!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    ll target=total/3;
    if(a>target||b>target||c<target)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}

int main()
{   ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--)
{
    solve();
}
    return 0;
}
