#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string str;
    cin>>str;
    int sum1=0,sum2=0;
    for(int i=0;i<3;i++){
        sum1+=str[i];
    }
    for(int j=3;j<6;j++){
        sum2+=str[j];
    }
    if(sum1==sum2){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
return 0;
}