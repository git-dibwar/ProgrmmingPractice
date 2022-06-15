#include<bits/stdc++.h>
using namespace std;
int volume(){
    int x, y;
    cin>>x>>y;
    int res;
    if(x>y){
        res=x-y;
    }
    else{
        res=y-x;

    }
    return res;

}
int main(){
int t;
cin>>t;
while(t--) cout<<volume()<<endl;
return 0;
}