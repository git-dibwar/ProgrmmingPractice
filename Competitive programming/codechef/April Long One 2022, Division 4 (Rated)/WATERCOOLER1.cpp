#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int x,y,m;
    cin>>x>>y>>m;
    if((x*m)<y){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
return 0;
}