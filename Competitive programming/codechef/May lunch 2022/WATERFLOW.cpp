#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    int a=x-w;
    int b=y*z;
    if(b>a) cout<<"overflow"<<endl;
    else if(b==a) cout<<"filled"<<endl;
    else cout<<"unfilled<"<endl;
}
return 0;
}