#include<bits/stdc++.h>
using namespace std;

int main(){
int x,y;
cin>>x>>y;
int p=x*y;
//1≤X,Y≤1000
if(x<1|y>1000){
    return 0;
}
else
cout<<p<<endl;
return 0;
}