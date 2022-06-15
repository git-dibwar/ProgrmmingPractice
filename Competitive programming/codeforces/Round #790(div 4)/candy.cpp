#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
//sorting the array in increasing order to find the smalled number
sort(a,a+n);

int min=a[0];
//initialising l at 0 to find the next smallest number
int l=0;
for(int i=0;i<n;i++){
    if(a[i]==min)
    l++;
}
//sum is the required answer
int sum=0;
for(int i=l;i<n;i++){
    int l=a[i]-min;
    sum+=l;
    }


cout<<sum<<endl;
    }
return 0;
}