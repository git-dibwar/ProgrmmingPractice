#include<bits/stdc++.h>
#define ll long long 
#define i long long int a[i]=i
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    ll int n,k;
    cin>>n>>k;
    ll int a[n];
    ll int ans;
    
    if(k==1){
        ans=n;
    }
    if(k>1){
        ans=k-1;
    }
  if(ans%2==0){
      cout<<"Even"<<endl;
  }
  else{
      cout<<"Odd"<<endl;
  }
}
return 0;
}