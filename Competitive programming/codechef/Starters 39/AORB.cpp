#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    //a=500 b=1000
    //delay in a .. -2/min
    //delay in b .. -4/min

    int m,n;
    int l=x+y;
    m=500-(x*2)+1000-(l*4);
    n=1000-(y*4)+500-(l*2);
    int ans=max(m,n);
    cout<<ans<<endl;
}

return 0;
}