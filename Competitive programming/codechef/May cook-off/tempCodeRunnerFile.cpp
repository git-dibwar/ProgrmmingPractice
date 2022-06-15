#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n==0){
        break;
    }
    if(n<=2){
        cout<<1<<endl;
    }
    if(n==3 || n==4){
        cout<<n-1<<endl;
    }
    if(n>4){
    cout<<n<<endl;
}
}
return 0;
}