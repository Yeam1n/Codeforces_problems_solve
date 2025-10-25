#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
       vector<long long>c(t);
    vector<long long>dp(t,LLONG_MAX);
 
    for(int i=0;i<t;i++)
    {
        cin>>c[i];
    }
dp[0]=c[0];
for(int i=0;i<t;i++)
{    
    for(int j=1;i+j<t;j=j*2)
    {
        int n;
        n=i+j;

        dp[n]=min(dp[n],dp[i]+c[n]);
    }
}
cout<<dp[t-1]<<endl;
    return 0;
}