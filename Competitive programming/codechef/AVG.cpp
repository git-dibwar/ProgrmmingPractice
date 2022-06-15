#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    long long int v;
    cin>>n>>k>>v;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int ans,va;
    va=v*(n+k);
    ans = (va-sum)%k;
    if(ans==0 && va-sum >0 ){
        ans= ((v*(n+k))-sum)/k;
        cout<<ans<<endl;
    }
    else{
        ans=-1;
            cout<<ans<<endl;
        
    }

}
return 0;
}