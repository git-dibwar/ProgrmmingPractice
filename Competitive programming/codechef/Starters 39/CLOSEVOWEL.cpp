#include<bits/stdc++.h>
#define ll long long 
#define MOD 10^9+7
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string a;
    cin>>a;
    ll int ans=1;
    for(int i=0;i<n;i++){
        if(a[i]=='c' || a[i]=='g' || a[i]=='l' || a[i]=='r'){
            ans*=2;
            ans%=MOD;
        }
    }
    cout<<ans<<endl;
    
}
return 0;
}