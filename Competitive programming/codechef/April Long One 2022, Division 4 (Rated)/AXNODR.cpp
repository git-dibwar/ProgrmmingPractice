#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int res=1;
    long long int n;
    cin>>n;
    if(n%4==0){
        cout<<n+3<<endl;
           }
    else if(n%4==1){
        cout<<n<<endl;
    }
    else{
        cout<<3<<endl;
    }
    
}
return 0;
}