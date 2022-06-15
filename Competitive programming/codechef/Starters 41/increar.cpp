#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
ll int t;
cin>>t;
while(t--){
    ll int x,y;
    cin>>x>>y;
    ll int ans;
    ll int d=max(x,y)-min(x,y);

    if(y<x){
        if(d%2!=0){
            ans=(d/2)+2;
        }
        else{
            ans=d/2;
        }
    }
    else{
        ans=d;
    }
    cout<<ans<<endl;


}
return 0;
}