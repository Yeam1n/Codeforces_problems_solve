#include<bits/stdc++.h>
using namespace std;
int main()
{    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        long long mid=(n+1)/2;
        mid=n-(mid-1);
        long long ans ;
        ans=s/mid;
        cout<<ans<<endl;
    }
    return 0;
}