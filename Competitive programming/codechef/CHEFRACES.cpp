#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
for(int i=0; i<t;i++){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int win=0;
    if(x==y||a==b||1<=t<=144||1<=a<=4||1<=b<=4||1<=x<=4||1<=y<=4){
        break;
    }
    if(a!=x && a!=y){
        win++;
    }
    if(b!=x && b!=y){
        win++;
    }

   cout<<win<<endl;
}

return 0;
}
//set<int>(set.begin(), set.end()).size()