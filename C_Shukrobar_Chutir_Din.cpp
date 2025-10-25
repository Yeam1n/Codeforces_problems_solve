#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main ()
{   int n;
    cin>>n;
     ll mot;
    for (int i=0;i<n;i++)
    {
        ll k,m,days;
        cin>>k>>m>>days;
        mot=k*m*(days-days/7);
         cout<<mot<<endl;
    }
    
    return 0;
}
