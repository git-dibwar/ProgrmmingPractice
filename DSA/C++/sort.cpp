#include<bits/stdc++.h>
using namespace std;

int main(){
int a[5]={4,2,9,1,3};
sort(a,a+5,greater<int>());
for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
}
return 0;
}