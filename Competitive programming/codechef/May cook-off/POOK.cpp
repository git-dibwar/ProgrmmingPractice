#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n<=2){
        cout<<1<<endl;
    }
    if(n==3 || n==2){
        cout<<n-1<<endl;
    }
   else{
    cout<<n<<endl;
}
}
return 0;
}