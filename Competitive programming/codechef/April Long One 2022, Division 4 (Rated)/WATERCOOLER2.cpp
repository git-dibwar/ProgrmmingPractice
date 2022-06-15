#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    int res;

   if(y%x>0){
       res=y/x;
       cout<<res<<endl;
   }
   if(y%x==0 && y!=x){
       res=(y/x)-1;
       cout<<res<<endl;
   }
   if(y==x){
       res=0;
       cout<<res<<endl;
   }
   

}
return 0;
}