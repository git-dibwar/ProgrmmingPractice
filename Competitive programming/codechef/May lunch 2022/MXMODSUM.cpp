#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){

    int n,m;
    cin>>n>>m; 
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
    sort(a,a+n);
    int x=a[n-1];
    int temp=0;
    for(int i=0;i<n;i++){
       
       
        
            temp=max(temp,a[i]+x+((((a[i]-x)%m)+m)%m));
    }
    cout<<temp<<endl;
}
    
return 0;
}