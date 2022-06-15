#include<bits/stdc++.h>
#include<cmath>
#define ll long long 

using namespace std;
int main(){
    ll int t;
    cin>>t;
    while(t--){
        ll int n,f,s,r;
        cin>>n;
       if(n>10){
           s=n/3+1;
           f=s+1;
           r=n-(f+s);
       }
       else{
           f=n/2;
           s=f-1;
           r=n-(f+s);
           if(r==s){
               f=n/2+1;
               r=n-(f+s);
           }
        
           

       }
        cout<<s<<" "<<f<<" "<<r<<endl;
    }

return 0;
}