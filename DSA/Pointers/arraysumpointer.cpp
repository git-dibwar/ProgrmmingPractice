#include<bits/stdc++.h>
using namespace std;
int sum(int a[] /*also can use "int *a"  */,int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=a[i];
    }
    return ans;
}

int fun(int a[]){
    cout<<a[0]<<endl;
    return a[0];
}
int main(){
int a[10]={5,3,2,6};
cout<<sum(a+3,1); //a[0+3]-----*(a+3)
cout<<endl;




int s[4]={1,2,3,4};
fun(s+1);
cout<<s[0]<<endl;

return 0;
}