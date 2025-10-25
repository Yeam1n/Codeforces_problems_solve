#include<bits/stdc++.h>
using namespace std;
int main()
{
         ios::sync_with_stdio(false);
      int x,y;
      cin>>x>>y;
      int i=0;
      int max;
      max=1000000;
      vector<int>f(max,0);
      int a;
      for(i=0;i<x;i++)
      {
        cin>>a;
        f[a]++;
      }     
      vector<int>c(max,0);
      for(i=1;i<max;i++)
      {
        for(int j=i;j<max;j=j+i)
        {
            c[i]=c[i]+f[j];
        }
      }
      int g;
      g=max-1;
for( int i=g;i>=1;i--)
{
    if(c[i]>=y)
    {
        cout<<i<<endl;
        break;
    }
}

         return 0;
}