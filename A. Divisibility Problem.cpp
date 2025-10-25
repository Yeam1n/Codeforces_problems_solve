#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
       long long int x,y;
       cin>>x>>y;
       if(x%y==0)
       {
           cout<<0<<endl;
       }
       else
        cout<<(y-(x%y))<<endl;
    }
    return 0;
}
