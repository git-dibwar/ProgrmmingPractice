#include<bits/stdc++.h>
using namespace std;

int main(){
int n,c=0,a=0;
string s;
cin>>s;
for(int i=0;i<n;i++){
    if(s[i]=='N'){
        c++;
    }
    else{
        a++;
    }

}

if(c==a){

}
else if(c>a){
    cout<<"Nutan";
}
else if(c<a){
    cout<<"Tusla";
}
return 0;
}