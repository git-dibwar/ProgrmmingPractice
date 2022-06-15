#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,x,y;
    string s;
    cin>>n>>x>>y;
    cin>>s;
    sort(s.begin(),s.end());
    if(s[n-1]=='0'|| s[0]=='1'){
        cout<<"0"<<endl;
    }
    else if(x>y){
        cout<<y<<endl;
    }
    else{
        cout<<x<<endl;
    }

}

return 0;
}