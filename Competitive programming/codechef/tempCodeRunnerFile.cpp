#include<bits/stdc++.h>
using namespace std;
string enroll(){
    int n,m,k;
    string res;
    cin>>n>>m>>k;
    if((m-k)<=n){
        res="Yes";
    }
    else{
        res="No";
    }
    return res;
}
int main(){
int t;
cin>>t;
while(t--) cout<<enroll()<<endl;
return 0;
}