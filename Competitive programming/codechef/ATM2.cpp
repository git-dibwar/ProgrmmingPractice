#include<bits/stdc++.h>
using namespace std;
string withdraw(){
    int p,n,a;
    string s;
    cin>>p;
    cin>>n;
    for(int i=1;i<=p;i++){
        
        cin>>a;
        if(n>=a){
        n=n-a;
        s+='1';
        }
        else{
            s+='0';
        }
    }
  return s;

}
int main(){
int t;
cin>>t;
while(t--) cout<< withdraw()<<endl;
return 0;
}