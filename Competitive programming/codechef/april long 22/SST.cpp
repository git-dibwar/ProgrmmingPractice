#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    if(x*10>y*5){
        cout<<"FIRST"<<endl;
    }
    else if(y*5>x*10){
        cout<<"SECOND"<<endl;
    }
    else{
        cout<<"ANY"<<endl;
    }
}
return 0;
}