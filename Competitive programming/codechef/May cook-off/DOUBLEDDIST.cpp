#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=true;
    sort(arr,arr+n);
    for(int i=1;i<n-1;i++){
        int dist1=arr[i]-arr[i-1];
        int dist2=arr[i+1]-arr[i];
        if(2*dist1!=dist2 && dist1!=2*dist2){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
return 0;
}