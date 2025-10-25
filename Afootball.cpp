#include<bits/stdc++.h>
using namespace std;
int main()
{
    string player;
    cin>>player;

 size_t z=player.find("0000000");
 size_t o=player.find("1111111");
 if(z<player.length() || o<player.length())
 {
     cout<<"YES";
 }
 else{
    cout<<"NO";
 }

 return 0;

}
