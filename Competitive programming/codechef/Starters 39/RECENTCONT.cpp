#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    string str="START38";
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        int m=a[i].compare(str);
        if(m==0){
            c1+=1;
        }
        else{
            c2+=1;
        }
    }
 
    cout<<c1<<" "<<c2<<endl;
}
return 0;
}