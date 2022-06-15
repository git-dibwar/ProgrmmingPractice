#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    long n,m;
    cin>>n>>m;
    vector<vector<long>>nums(n,vector<long>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>nums.at(i).at(j);
        }
    }
    bool done=true;
    for(int i=0;i<n;i++){
        for(int j=0;i<n;j++){
            if(nums.at(i).at(j)>nums.at(n-1).at(m-1)||nums.at(i).at(j)>nums.at(0).at(0)){
                done=false;
                break;
            }
        }
        if(!done)break;
    }
    if(done){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
return 0;
}