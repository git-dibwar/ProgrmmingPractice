#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
ll int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int ans;
    ans=(x*z)-(x*y);
    cout<<ans<<endl;
}
return 0;
}