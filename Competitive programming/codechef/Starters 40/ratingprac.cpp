#include<bits/stdc++.h>
using namespace std;
bool sortornot(int a[],int n){
    if(n==0 || n==1)
    return true;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i])
        return false;
    }
    return true;
    }
int main(){
int t;
cin>>t;
while(t--){
    int n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(sortornot(a,n))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    
    
    

}
return 0;
}