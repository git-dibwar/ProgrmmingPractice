#include<bits/stdc++.h>
using namespace std;

int main(){
int t,l;
string s;

cin>>t;
while(t--){
    int res;
    cin>>l;
    cin>>s;
    for(int i=0;i<l;i++){
        if(s[i]=='0'||s[i]=='5')
            res++;
    }
    if(res!=0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
return 0;
}