#include<bits/stdc++.h>
using namespace std;

int main(){
long long int t;
cin>>t;
while(t--){
    long long int x,y;
    cin>>x>>y;

    int m;
    m=y-x;

    int n;
    n=m%8;

    if(n<=0){
        cout<<m/8<<endl;
    }
    else{
        cout<<(m/8)+1<<endl;
    }
    
}
return 0;
}