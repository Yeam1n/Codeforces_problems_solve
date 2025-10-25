#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    float steps=x%5;
    if (steps==0)
    {
        cout<<x/5<<endl;
    }
    else
        cout<<x/5+1;
    return 0;

}
