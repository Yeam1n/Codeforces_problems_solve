#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int sq;
        cin>>sq;
        long long sum=0;
        for(int i=0;i<sq;i++){
            int num;
            cin>>num;
            sum=sum+num;
        }
        long long root=sqrt(sum);
        if(root*root==sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
