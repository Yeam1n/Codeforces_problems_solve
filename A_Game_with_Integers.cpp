#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    int n;
    int sum=0;
    int sub=0;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        sum=n+1;
        sub=n-1;
        if(sum%3==0)
        {
            cout<<"First"<<endl;
        }
        else if(sub%3==0)
        {
            cout<<"First"<<endl;
        }
        else 

        {
            cout<<"Second"<<endl;
        }
    }
    return 0;
}