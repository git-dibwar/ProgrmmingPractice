#include<bits/stdc++.h>
using namespace std;

int main(){
int n=6;
int a[n]={1,4,2,3,7,6};
//for increasig order use-----sort(arr,arr+size);
//for decreasing order use-----sort(arr,arr+size,greater<int>());
sort(a,a+n,greater<int>());
int i=0;
cout<<"increasing order"<<endl;
while(i<n){
    cout<<a[i];
    i++;
}
cout<<endl;


return 0;
}