#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int a=0;
        int b=0;
        int c=0;
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            else if(s[i]=='B')
            {
                b++;
            }
            else{
                c++;
            }
        }
        if(a+c==b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}