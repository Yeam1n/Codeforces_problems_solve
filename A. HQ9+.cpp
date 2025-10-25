#include<bits/stdc++.h>
using namespace std;

int main()
{
   string x;
   cin>>x;
   if(x.find_first_of("HQ9")!=string::npos)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO";
   }
   return 0;
}
