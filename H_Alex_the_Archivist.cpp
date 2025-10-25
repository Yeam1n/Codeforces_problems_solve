#include<bits/stdc++.h>
using namespace std;
int main()
{    int a;
    cin>>a;
    int ts=0;
    int d=a-2;
    int A=a-1;
    int mod;
    int g;
    for(int i=2;i<=A;i++)
    {
        int t=a;
        int ds=0;
        while(t>0)
        {   mod=t%i;
            ds=ds+mod;
            t=t/i;
        }
        ts=ts+ds;

    }
    int x=ts;
    int y=d;
    while(y!=0)
    {
        int z;
        z=x%y;
        x=y;
        y=z;
    }
    g=x;
    cout<<(ts/g)<<"/"<<(d/g)<<endl;


    return 0;
}