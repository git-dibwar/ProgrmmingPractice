#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int *a = new int [n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int max=-1;
for(int i=0;i<n;i++){
    if(max<a[i]){
        max=a[i];
    }
}
cout<<max<<endl;

return 0;
}