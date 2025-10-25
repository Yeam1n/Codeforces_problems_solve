#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     int x_er_sum=0;
     int y_er_sum=0;
     int z_er_sum=0;
     for (int i=0;i<t;i++)
     {
        int x,y,z;
        cin>>x>>y>>z;
        x_er_sum+=x;
        y_er_sum+=y;
        z_er_sum+=z;
     }\
     if(x_er_sum==0 && y_er_sum==0 && z_er_sum==0)
     {
        cout<<"YES"<<endl;
     }
        else
        {
            cout<<"NO"<<endl;
        }
        return 0;
    }
    