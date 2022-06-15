#include<bits/stdc++.h>
using namespace std;

int main(){
int a[6]={12,45,23,51,19,8};
for(int i=0;i<6;i++){
    int c=a[i];
    int j=i-1;
    while(a[j]>c && j>=0){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=c;

    for(int i=0;i<6;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
}
return 0;
}