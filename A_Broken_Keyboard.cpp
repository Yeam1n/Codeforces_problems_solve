#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        set<char>st;
        int k=s.size();
        for(int i=0;i<k;i++)
        {
            if(s[i]==s[i+1])
            {
                i=i+1;
            }
            else
            st.insert(s[i]);
        }
        for(auto it : st)
        {
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}