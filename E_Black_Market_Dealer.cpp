#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>bp(n);
    vector<int>sp(n);
    vector<int>p(n);
    int i;
    for(int i=0;i<n;i++)
{
    cin>>bp[i];
}
    for(i=0;i<n;i++)
    {
        cin>>sp[i];
    }
    for(int i=0;i<n;i++)
    {
        p[i]=sp[i]-bp[i];
    }
sort (p.begin(),p.end());
reverse(p.begin(),p.end());
 ll tp=0;
for(int i=0;i<k;i++)
{
 tp=tp+p[i];
}
cout<<tp<<endl;
return 0;

}