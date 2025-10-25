#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n=n*2;
        int odd=0;
        int even=0;
        int x;

        for (int i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==0)
            {
                even++;
            }
            else
            odd++;
        }
        if(even==odd)
        {
            cout<<"yes";
            cout<<endl;
        }
        else
        cout<<"No"<<endl;
    }
    return 0;
}