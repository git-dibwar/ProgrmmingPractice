#include<bits/stdc++.h>
using namespace std;

int main(){
int a[5]={3,2,2,4,2};
int count=0,max=0,maxe;
for(int j=0;j<5;j++)
{count =0;
    for(int i=j+1;i<5;i++){
        if(a[j]==a[i]){
            count++;
        }
        if(count>max){
            max=count;
            maxe=a[j];
        }
    }
}
cout<<max<<" "<<maxe;
return 0;
}