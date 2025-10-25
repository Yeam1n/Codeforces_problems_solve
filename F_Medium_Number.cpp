#include<bits/stdc++.h>
using namespace std;
int main()
   {
       ios::sync_with_stdio(false);
    cin.tie(nullptr);
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int x,y,z;
    cin>>x>>y>>z;
    vector<int>num={x,y,z};
    sort(num.begin(),num.end());
    cout<<num[1]<<endl;

}   
return 0;




}



