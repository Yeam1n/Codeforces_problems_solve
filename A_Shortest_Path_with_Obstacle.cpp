#include<bits/stdc++.h>
using namespace std;
int main()
{   long long t;
    cin>>t;
    while(t--)
    {
        long long  a,b,c,d,e,f;
        cin>>a>>b;
        cin>>c>>d;
        cin>>e>>f;
        long long  min1,max1,min2,max2;
        min1=min(b,d);
        max1=max(b,d);
        min2=min(a,c);
        max2=max(a,c);

        if(a==c && c==e)
        {
            if(min1<f && max1>f)
            {
                cout<<(max1-min1)+2<<endl;
            }
            else
            {
                cout<<(max1-min1)<<endl;
            }
        }
        else if(b==d && d==f)
        {
            if(min2<e && max2>e)
            {
                cout<<(max2-min2)+2<<endl;
            }
            else
            {
                cout<<(max2-min2)<<endl;
            }
        }
        else
        {
            cout<<(max1-min1)+(max2-min2)<<endl;
        }

    }
    return 0;
}

