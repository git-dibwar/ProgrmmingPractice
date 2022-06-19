#include<bits/stdc++.h>
using namespace std;

int main(){
int nums[]={0,0,1,1,1,2,2,3,3,4};
int size=sizeof(nums)/sizeof(nums[0]);
int ans;
for(int i=0;i<size;i++){
    int count=0;
    if(nums[i+1]>nums[i]){
        count++;
    }
    else{
        continue;
    }
    ans=ans+count;
    
}
cout<<ans<<endl;
for(int i=0;i<size;i++){
    if(nums[i]!=nums[i+1]){
        cout<<nums[i]<<" ";
    }
    else{continue;}
}
return 0;
}