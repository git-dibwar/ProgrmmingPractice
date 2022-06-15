#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,res;
int t;
cin>>t;
while(t--){
    cin>>a>>b;
    if(a==0 && b==0){
        res=1;
        cout<<res<<endl;
    }
    if(a==0 && b>0){
        res=1;
        cout<<res<<endl;
    }
    if(a>0 && b==0){
        res=a+1;
        cout<<res<<endl;
    }
    if(a>0 && b>0){
        res=(a+b*2)+1;
        cout<<res<<endl;
    }
}
return 0;
}