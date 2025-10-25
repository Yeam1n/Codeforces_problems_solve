#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum,result;
    sum=0;
    for (int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        sum=sum+p;
    }
    result=sum/n;
    cout<<result<<setprecision(12)<<endl;
    return 0;
}
