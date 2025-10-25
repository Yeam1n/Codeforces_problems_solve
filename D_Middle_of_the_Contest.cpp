#include<bits/stdc++.h>
using namespace std;
int main()
   {
       ios::sync_with_stdio(false);
int h1,m1;
int h2,m2;
char c;

cin>>h1>>c>>m1;
cin>>h2>>c>>m2;
int tm1=h1*60+m1;
int tm2=h2*60+m2;
int h5=(tm1+tm2)/2;
int h=h5/60;
int m=h5%60;
if(h>9 && m>9)
{
    cout<<h<<":"<<m<<endl;
}
else
{
    if(h<10)
    {
        cout<<0;
    }
    cout<<h<<":";
    if(m<10)
    {
        cout<<0;
    }
    cout<<m<<endl;
}
return 0;


   }