#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    int i;
    cin>>s;
    for (i=0;i<s.length();i++)
    {
        if(s[i]==',')
        {
            s[i]=' ';
        }
    }
    for (i=0;i<s.length();i++)
    {
        if(islower(s[i]))
        {
            s[i]=toupper(s[i]);
        }
        else if(isupper(s[i]))
        {
            s[i]=tolower(s[i]);
        }

    }
    cout<<s;



    return 0;

}
