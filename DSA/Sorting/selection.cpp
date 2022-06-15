#include<bits/stdc++.h>
using namespace std;
int main(){

int a[5]={7,2,1,5,14};
for(int i=0;i<4;i++){
    for(int j=i+1;j<5;j++){
        if(a[i]>a[j]){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
  for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
  
return 0;
}

