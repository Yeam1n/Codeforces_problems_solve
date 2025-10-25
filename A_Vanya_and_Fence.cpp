#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nf,fh;
    cin>>nf>>fh;
    
    int h;
    int w=0;
    for(int i=0;i<nf;i++)
    {
        cin>>h;
        if(h>fh)
        {
          w=w+2;
        }
        else if(h<fh)
        {
            w=w+1;
        }
        else if(h==fh)
        {
            w=w+1;
        }
    }
    cout<<w<<endl;
    return 0;

}