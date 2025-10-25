#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int of=0;
    int un=0;
    for (int i=0;i<n;i++)
    {
        int problem;
        cin>>problem;
        if(problem==-1)
        {
            if(of>0)
            {
                of=of-1;
            }
            else
            {
                un=un+1;
            }
        }
        else
        {
            of=of+problem;
        }
    }
    cout<<un;
}
