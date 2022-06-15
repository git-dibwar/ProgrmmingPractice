#include<bits/stdc++.h>
using namespace std;
int shoes(){
    int n,m;
    int res;
    cin>>n>>m;
    if(m>=n){
        res=n;
    }
    else{
        res=m+((n-m)*2);
    }
    return res;
}
int main(){
int t;
cin>>t;
while(t--) cout<<shoes()<<endl;
return 0;
}