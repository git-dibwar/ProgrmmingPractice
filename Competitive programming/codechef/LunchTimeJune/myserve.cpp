#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while(t--){
    int p,q;
    cin>>p>>q;

    int t=p+q;
    int d=t/2;
    if(p==0 && q==0){
        cout<<"Alice"<<endl;
    }
    else if(t%2==0){
        if(d/2==0){
            cout<<"Bob"<<endl;
        }
        
        else{
            cout<<"Alice"<<endl;
        }
    }
    else{
        t=t+1;
        d=t/2;
        if(d/2==0){
        cout<<"Alice"<<endl;}
        else{
            cout<<"Bob"<<endl;
        }
    }
   
}
return 0;
}