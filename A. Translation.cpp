#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    reverse(s1.begin(),s1.end());
    if(s!=s1)
    {
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;

}
