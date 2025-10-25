#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    for (int i=0;i<t;i++)
    {   int n;
        cin>>n;
        string s;
        cin>>s;
        string s1;
        s1=s;
        sort(s1.begin(),s1.end());
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s1[i])
            {
                x++;
            }
        }
        cout<<x<<endl;
    }
}