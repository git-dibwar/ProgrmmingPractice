#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    ll int n;
    cin>>n;
    ll int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            c+=1;
        }
        else{
            continue;
        }
    }
    cout<<n-c<<endl;
}
return 0;
}